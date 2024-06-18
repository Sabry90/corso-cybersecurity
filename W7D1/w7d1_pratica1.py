def lunghezze_parole(A):
    
    B = [len(parola) for parola in A]
    return B


A = ["miao", "gatto", "lavoro", "è", "indispensabile"]
B = lunghezze_parole(A)
print(B)  
        
    