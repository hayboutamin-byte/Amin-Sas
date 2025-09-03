#include<stdio.h>
#include<math.h>


int main()
{
    float a,b,c;
    float delta, x1 , x2;

    printf("entrer le 1er nombre: ");
    scanf("%d",&a);
    printf("entrer le 2er nombre: ");
    scanf("%d",&b);
    printf("entrer le 3er nombre: ");
    scanf("%d",&c);

    delta = pow(b,2)- 4*a*c;

    if(delta > 0)
    {
        x1 = ((-b + sqrt(delta))/(2*a));
        x2 = ((-b - sqrt(delta))/(2*a));
        printf("les deux solution reel : x1 = %.2f et x2 = %.2f ",x1,x2);
    }
    else if (delta == 0)
    {
        x1 = (-b/2*a);
        printf("le solution reel: x1 = %.2f",x1);
    }
    else if ( delta < 0)
    {
       printf("Pas de soluution");
    }  


}