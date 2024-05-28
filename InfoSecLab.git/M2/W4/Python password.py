import random
import string

def genera_password(semplice=True):
    if semplice:
        lunghezza = 8
        caratteri = string.ascii_letters + string.digits
    else:
        lunghezza = 20
        caratteri = string.ascii_letters + string.digits + string.punctuation

    password = ''.join(random.choice(caratteri) for _ in range(lunghezza))
    return password

# Esempi di utilizzo della funzione
print("Password semplice:", genera_password())
print("Password complessa:", genera_password(semplice=False))