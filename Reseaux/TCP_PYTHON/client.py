import socket
hote = "localhost"

port = 25001
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
a_envoyer = True
sock.connect((hote, port))
while a_envoyer:
    texte = input("message à envoyer : (FIN pour fin) ")
    envoi = texte.encode()
    sock.send(envoi)
    