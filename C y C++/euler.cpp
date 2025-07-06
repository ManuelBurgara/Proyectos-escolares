#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,i,j;
    double suma=0,factorial=1;

    printf("Ingresa valor de x:\n");
    scanf("%d",&x);

    suma=1+x;
    printf("1+%d",x);
    for(i=2;i<=100;i++)
    {
factorial=1;
        for(j=i;j>0;j--)
            factorial*=j;
            printf("+%d^%d/%d!",x,i,i);
            suma+=(pow(x,i)/factorial);

    }
    printf("\n= %f",suma);
    return 0;
}
