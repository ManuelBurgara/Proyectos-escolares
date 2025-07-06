#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define p printf
#define s scanf

int main(){

 int calificaciones[100];
   int posicion;
   float promedio;
   int alta = 0;
   int baja = 101;
   int fila;
   int ncalif;
   int suma=0;
int posicionalta=0;
int posicionbaja=0;
   system("color 1F");
//Ingresamos cuantas calificaciones tomaremos en cuenta para el promedio
   p("¿cuantas calificaciones ingresara? : ");
   scanf("%d",&ncalif);
   for(posicion=0;posicion<ncalif;posicion++){
   printf("ingrese la calificacion %d :",posicion);
   scanf("%d",&calificaciones[posicion]);
   }
   printf("\n");
   //imprimimos las calificaciones que acabamos de obtener junto con la posicion en la que estan almacenadas
   for(posicion=0;posicion<ncalif;posicion++){
    printf("la calificacion en la posicion %d es %d \n",posicion,calificaciones[posicion]);
   }
   printf("\n");
//almacenamos la suma de todas las calificaciones y promediamos
for(posicion=0;posicion<ncalif;posicion++){
suma+=calificaciones[posicion];
}
promedio=suma/ncalif;
//se imprime el resultado obtenido
printf("el promedio es %f \n \n",promedio);
//buscamos cual es la calificacion mas alta

for(posicion=0;posicion<ncalif;posicion++){
 if(calificaciones[posicion]>alta)
  alta=calificaciones[posicion];
}
printf("la calificacion mas alta es %d \n",alta);

//buscamos la posicion dentro del arreglo donde la calificacion fue la mas alta
for(posicion=0;posicion<ncalif;posicion++){
 if(calificaciones[posicion]==alta){
  alta=calificaciones[posicion];
posicionalta=posicion;
 }
}
printf("la calificacion mas alta esta en la posicion %d \n \n",posicionalta);
// buscamos cual es la calificacion mas baja
for(posicion=0;posicion<ncalif;posicion++){
 if(calificaciones[posicion]<baja)
  baja=calificaciones[posicion];
}
printf("la calificacion mas baja es %d \n",baja);
//buscamos la posicion en el arreglo que corresponde a la calificacion mas baja
for(posicion=0;posicion<ncalif;posicion++){
 if(calificaciones[posicion]==baja){
  baja=calificaciones[posicion];
posicionbaja=posicion;
 }
}

printf("la calificacion mas baja esta en la posicion %d \n",posicionbaja);

return 0;
}
