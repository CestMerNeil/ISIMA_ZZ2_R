#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/socket.h>
#include <strings.h>
#include <string.h>
#include <ifaddrs.h>

int main(int argc, char *argv[])
{
    int sockx, scom, lg_app, ecode, i, j;
    struct sockaddr_in6 adr6, appelant, *so6;
    struct sockaddr_storage recep;
    char buf[1500], renvoi[1500], host[1024], service[20], serv[10];
    char adresseipv6[INET6_ADDRSTRLEN];
    char adresseipv4[INET_ADDRSTRLEN];
    struct addrinfo *res1, *rres1, hints;
    struct in6_addr ip;
    struct ifaddrs *res = NULL;

    printf("Une facon de faire automatique\n");

    memset(&hints, 0, sizeof(hints));
    hints.ai_flags = AI_PASSIVE;
    hints.ai_socktype = SOCK_STREAM;
    //  hints.ai_family = AF_INET6;  pour avoir que ipV6
    hints.ai_family = PF_UNSPEC; // pour avoir tout ip

    sprintf(serv, "%d", atoi(argv[1]));
    ecode = getaddrinfo(NULL, serv, &hints, &rres1);

    if (ecode)
    {
        printf("problem %s\n", gai_strerror(ecode));
        exit(1);
    }

    for (res1 = rres1; res1; res1 = res1->ai_next)
    {
        // en linux, un seul bind possible
        if (res1->ai_family == AF_INET6)
        {
            sockx = socket(res1->ai_family, res1->ai_socktype, res1->ai_protocol);

            if (bind(sockx, res1->ai_addr, res1->ai_addrlen) < 0)
            {
                printf("Problerme de bind\n");
                exit(1);
            }

            listen(sockx, 5);
        }
    }
    printf("fin de l'initialisation automatique\n");

    while (1)
    {
        scom = accept(sockx, (struct sockaddr *)&recep, (unsigned long *)&lg_app);
        getnameinfo((struct sockaddr *)&recep, sizeof(recep), host, sizeof(host), service, sizeof(service), 0);
        printf("recu de %s\n", host);

        while (1)
        {
            recv(scom, buf, sizeof(buf), 0);

            printf("buf recu %s %d\n", buf, strlen(buf));
            bzero(renvoi, sizeof(renvoi));
            for (i = strlen(buf) - 1, j = 0; i >= 0; i--, j++)
                renvoi[j] = buf[i];
            renvoi[j + 1] = '\0';

            send(scom, renvoi, strlen(renvoi), 0);
            bzero(buf, sizeof(buf));

            if (strcmp(renvoi, "NIF") == 0)
                break;
        }
        //close(scom);
    }
    //close(sockx);
}
