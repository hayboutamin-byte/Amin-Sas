#include <stdio.h>

int main()
{
    int Tableau[] = {1, 2, 3, 4, 5};
    int n = 5;
    int bag = 0;

    for (int i = 0; i < n/2; i++)
    {

        bag = Tableau[i];
        Tableau[i] = Tableau[n - i - 1];
        Tableau [n - i - 1] = bag;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Tableau[i]);
    }
    
    return 0;
}