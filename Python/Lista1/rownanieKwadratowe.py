import math
a = float(input("Podaj a: "))
b = float(input("Podaj b: "))
c = float(input("Podaj c: "))

if a == 0:
    print("To nie jest rownanie kwadratowe")
else :
    delta = b * b - (4 * a * c)
    if delta < 0:
        print("Brak rozwiazan w zbiorze liczb rzeczywistych")
    elif delta==0:
        wynik1 = -b/(2*a)
        print("Istnieje jedno rozwiazanie rowne", wynik1)
    else:
        wynik1 = (-b + math.sqrt(delta))/(2*a)
        wynik2 = (-b - math.sqrt(delta))/(2*a)
        print("Istnieja dwa rozwiazania rowne", wynik1, wynik2)

