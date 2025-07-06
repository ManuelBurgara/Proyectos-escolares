#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("dime un año y te dire si dicho año es biciesto o no :");
    scanf("%d",&year);

    if((year%4==0)&&(year%100!=0)||(year%400==0))
    printf("el año %d es bisiesto .\n",year);
    else
    printf("el año %d no es bisiesto.",year );


    return 0;




}
