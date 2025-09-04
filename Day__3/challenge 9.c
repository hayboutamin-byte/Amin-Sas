#include <stdio.h>

int main() {
    int n, copy, count = 0;

    printf("Entrer un nombre : ");
    scanf("%d", &n);

    copy = (n < 0) ? -n : n;

    if(n == 0) {
        count = 1;
    } else {
        while(copy > 0) {
            copy /= 10;
            count++;
        }
    }

    printf("Le nombre %d a %d chiffre(s).\n", n, count);

    return 0;
}
