#include <stdio.h>

int main() {
    int base, exp;
    int result = 1;

    printf("Base: ");
    scanf("%d", &base);

    printf("Exposant: ");
    scanf("%d", &exp);

    for(int i = 0; i < exp; i++) {
        result = result * base;
    }

    printf("%d ^ %d = %d\n", base, exp, result);

    return 0;
}