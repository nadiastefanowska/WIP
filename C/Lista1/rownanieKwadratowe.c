#include <math.h>
#include <stdio.h>

int main() {
    float a,b,c;
    float delta;
    float wynik1,wynik2;

    printf("Podaj a, b i c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a==0) {
        printf("To nie jest rownanie kwadratowe");
    }else {
        delta = b*b-4*a*c;
        if (delta<0) {
            printf("Brak rozwiazań w zbiorze liczb rzeczywistych.\n");
        }else if (delta ==0){
            wynik1 = -b/(2*a);
            printf("Istenieje jedno rozwiazanie: %f\n", wynik1);
        }else{
            wynik1= (-b + sqrt(delta)) / (2 * a);
            wynik2= (-b - sqrt(delta)) / (2 * a);

            printf("Istnieja dwa rozwiazania rowne: %f oraz %f\n",  wynik1, wynik2);
        }
    }
    return 0;
}