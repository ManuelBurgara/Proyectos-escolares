#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("dime un a�o y te dire si dicho a�o es biciesto o no :");
    scanf("%d",&year);

    if((year%4==0)&&(year%100!=0)||(year%400==0))
    printf("el a�o %d es bisiesto .\n",year);
    else
    printf("el a�o %d no es bisiesto.",year );


    return 0;




}
