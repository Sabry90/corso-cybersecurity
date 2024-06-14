import math

scelta = 0
while True:
    scelta = int(input("Scegli la figura geometrica: \n1- Quadrato\n2- Rettangolo\n3- Cerchio\n"))
    if (scelta == 1):
        lato = int(input("\n Scegli la misura del lato: "))
        perimetro = lato * 4
        area = lato**2
        print(f"\n Il perimetro del quadrato e: {perimetro}")
        print(f"\n L' area del quadrato e: {area}")
    elif (scelta == 2):
        base = area
        altezza = area / 2
        perimetro_r = 2 * (base + altezza)
        area_r = base * altezza
        print(f"\n Il perimetro del rettangolo e: {perimetro}")
        print(f"\n L' area del rettangolo e: {area_r}")
    elif (scelta == 3):
        raggio = area_r
        circonferenza = 2 * math.pi * raggio
        area_c = math.pi * raggio**2
        print(f"\n La circonferenza del cerchio e: {circonferenza}")
        print(f"\n L' area del cerchio e: {area_c}")
    else:
        print("\n Scelta errata, ritenta")  