#include <stdio.h>
#include <stdlib.h>

int main()
{
   int lineas,i,j,band=0;

   for(;;)
    {
        printf("ingresa numero de lineas\n");
        scanf("%d",&lineas);

        for(i=1;i<=lineas;i++)
        {
            for(j=0;j<i;j++)
                printf("*");
            printf("\n");
        }
        printf("\n\nDeseas dibujar nuevamente 0.-Si 1.-No");
        scanf("%d",&band);
        if(band==1)
            break;
        system("CLS");

    }

   return 0;

}
