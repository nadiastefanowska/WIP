#include <stdio.h>

int main(void) {
    int a,b;
    printf("Podaj dwie liczby całkowite: ");
    scanf("%d %d", &a, &b);
    while (b != 0) {
        int reszta = a % b;
        a=b;
        b=reszta;
    }
    printf("NWD wynosi: %d\n", a);
    return 0;
}
