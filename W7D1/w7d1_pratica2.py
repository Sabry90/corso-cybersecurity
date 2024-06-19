import random
import string

def genera_password(complessità='semplice'):
    if complessità == 'semplice':
        
        caratteri = string.ascii_letters + string.digits
        lunghezza = 8
    elif complessità == 'complessa':
        
        caratteri = string.ascii_letters + string.digits + string.punctuation
        lunghezza = 20
    else:
        raise ValueError("La complessità deve essere 'semplice' o 'complessa'")
    
    password = ''.join(random.choice(caratteri) for _ in range(lunghezza))
    return password


password_semplice = genera_password('semplice')
password_complessa = genera_password('complessa')

print("Password semplice:", password_semplice)
print("Password complessa:", password_complessa)

