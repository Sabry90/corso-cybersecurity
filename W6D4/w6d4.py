import math

while True:
    scelta = int(input("Scegli la figura geometrica: \n1- Quadrato\n2- Rettangolo\n3- Cerchio\n"))
    
    if scelta == 1:
        lato = float(input("Scegli la misura del lato: "))
        perimetro = 4 * lato
        print(f"Il perimetro del quadrato è: {perimetro}")
        break
        
    elif scelta == 2:
        base = float(input("Scegli la misura della base: "))
        altezza = float(input("Scegli la misura dell'altezza: "))
        perimetro = 2 * (base + altezza)
        print(f"Il perimetro del rettangolo è: {perimetro}")
        break
        
    elif scelta == 3:
        raggio = float(input("Scegli la misura del raggio: "))
        perimetro = 2 * math.pi * raggio
        print(f"Il perimetro del cerchio è: {perimetro}")
        break
        
    else:
        print("Scelta errata, ritenta.")