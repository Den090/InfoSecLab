def lunghezza_parole(lista_A):
    """
    Restituisce una lista di interi rappresentanti la lunghezza delle parole nella lista A.
    :param lista_A: Lista di parole
    :return: Lista di lunghezze delle parole
    """
    lista_B = [len(parola) for parola in lista_A]
    return lista_B


# Esempio di utilizzo:
lista_A_cybersecurity = ["firewall", "criptografia", "malware", "hacker"]
lista_B_lunghezze = lunghezza_parole(lista_A_cybersecurity)
print("Lunghezze delle parole in lista A:", lista_B_lunghezze)