n = int(input("Podaj liczbe n: "))
p = int(input("Podaj podstawe systemu p: "))

oryginalna=n
odwrocona=0
while n!=0:
     odwrocona = odwrocona * p + (n % p)
     n = n // p

if odwrocona==oryginalna:
    print("Liczba", oryginalna, "jest palindromem")
else:
    print("Liczba", oryginalna, "nie jest palindromem")
