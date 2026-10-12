#include<stdio.h>

int main() {
    int n, p, m=0, oryginalna;
    //m to bedzie odwrocona n

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    printf("Podaj podstawe systemu p: ");
    scanf("%d", &p);

    oryginalna=n;
    while (n>0) {
        m=m*p+(n%p);
        n=n/p;
    }
    if (m==oryginalna)
        printf("Liczba jest palindromem.\n");
    else
        printf("Liczba nie jest palindromem.\n");

printf("Odwrocona liczba: %d\n", m);
    return 0;

}