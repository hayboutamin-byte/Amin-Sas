#include <stdio.h>


int main() 
{
    int decimal;
    printf("Entrez un entier décimal : ");
    scanf("%d", &decimal);

    printf("Décimal : %d\n", decimal);
    printf("Hexadécimal : %X\n", decimal);

    printf("Binaire : ");
    for (int i = 31; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        if (bit) {
            for (int j = i; j >= 0; j--) {
                printf("%d", (decimal >> j) & 1);
            }
            break;
        }
    }
    printf("\n");

    return 0;
}
