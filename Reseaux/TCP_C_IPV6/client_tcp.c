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
    char buffer[200], texte[200];
    int port, rc, sock, c, i;
    struct in6_addr serveraddr;
    struct addrinfo hints, *res = NULL;

    if (argc != 3)
    {
        printf("usage : clientv6 nom_serveur port\n");
        exit(1);
    }

    memset(&hints, 0x00, sizeof(hints));
    hints.ai_flags = AI_NUMERICSERV;
    hints.ai_family = AF_INET6;
    hints.ai_socktype = SOCK_STREAM;

    port = atoi(argv[2]);

    // on teste sil'adresse IP est numeric ou textuel
    //  si rc = 1 , c'est numeric donc resolution numeric
    // rc = inet_pton(AF_INET6, argv[1], &serveraddr);
    if (rc == 1)
        hints.ai_flags |= AI_NUMERICHOST;

    // recuperation des infos sur le serveur distant
    rc = getaddrinfo(argv[1], argv[2], &hints, &res);
    if (rc != 0)
    {
        printf("pb %s\n", gai_strerror(rc));
        exit(1);
    }

    sock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);

    if (connect(sock, res->ai_addr, res->ai_addrlen) < 0)
    {
        printf("probleme connexion\n");
        exit(1);
    }

    while (1)
    {
        bzero(texte, sizeof(texte));
        bzero(buffer, sizeof(buffer));
        i = 0;
        printf("Entrez une ligne de texte : \n");
        while ((c = getchar()) != '\n')
            texte[i++] = c;
        printf("texte %s\n", texte);
        send(sock, texte, strlen(texte) + 1, 0);
        recv(sock, buffer, sizeof(buffer), 0);
        printf("recu %s\n", buffer);

        if (strcmp("FIN", texte) == 0)
            break;
    }

    //close(sock);
}
