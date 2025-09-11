#include<stdio.h>
#include<string.h>

struct point
{
    int x,y;
};


int main()
{
    struct point P;
    struct point *Ptr = &P;

    Ptr->x = 15;
    Ptr->y = 10;

    printf("Point est : (%d , %d).",P.x,P.y);

    return 0;
}
