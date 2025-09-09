#include <stdio.h>


int sum(num1,num2)
{

    return(num1 + num2);
}

int main()
{
    int num1,num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("result de %d + %d = %d\n",num1,num2,sum(num1,num2));

    return 0;
}
