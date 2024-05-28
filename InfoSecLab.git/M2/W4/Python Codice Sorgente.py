x = "Benvenuti, questo programma permette di calcolare il perimetro \ndi diverse figure geometriche.\n"
print(x)
y = "Inserisci il numero corrispondente alla figura geometrica \ndi cui vuoi cacolare il perimetro:\n"
print(y)


#elenco delle figure
a = "1.Triangolo\n2.Cerchio\n3.Rettangolo\n"
print(a)


#scelta utente
b = int(input("Inserisci il numero corrispondente alla figura:"))
print(b)


#calcolo del perimetro del triangolo
if b == 1:
  print("Hai scelto il triangolo")
  c = int(input("Inserisci la misura del primo lato:"))
  d = int(input("Inserisci la misura del secondo lato:"))
  e = int(input("Inserisci la misura del terzo lato:"))
  f = c + d + e
  print(c, "+", d, "+", e, "=",f)
  print("Il perimetro del triangolo è:", f)


#calcolo del perimetro del cerchio
elif b == 2:
  print("Hai scelto il cerchio")
  g = int(input("inserisci la misura del raggio:"))
  h = 2 * 3.14 * g
  print("2 * 3.14 *", g, "=", h)
  print("il perimetro del cerchio è:", h)


#calcolo del perimetro del rettangolo
elif b ==3:
    i = int(input("Inserisci la misura della base:"))
    l = int(input("Inserisci la misura dell'altezza:"))
    print("il perimetro del rettangolo:")
    m = i + l * 2
    print(i, "+", l, "*", 2, "=", m)
else:
    print('Scelta non valida, prova di nuovo')