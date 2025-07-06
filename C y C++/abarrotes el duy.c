 #include <stdio.h>
 #include <stdlib.h>
 #include<math.h>
 int main(){

  int nclientes=0;
 int totaldia=0;
 int productosvend=0;
 int nproductos=0;
  int totalcompra=0;
  int clavepago;
  int seleccion;
  int salir;
  int rulfes=9;
   int chetos=7;
  int doritos=8;
   int paketaxo=10;
   int caguama=30;
   int coca=13;
   int jugo=11;
    int pagar;

    int precio, pagada, cambio, b500, b200, b100, b50, b20, m10, m5, m2, m1,m50c=0, temp;
    do{
            do{
        system("cls");
         system("color 1F");
    printf("BUEN DIA GRACIAS POR COMPRAR EN ABARROTES DUY\n");
    printf("¿QUE PRODUCTOS AÑADIRA A SU COMPRA ?\n");
    printf("NUESTA OFERTA\n");
    printf("1)RUFLES        9$\n");
    printf("2)CHETOS        7$\n");
    printf("3)DORITOS       8$\n");
    printf("4)PAKETAXO      10$\n");
    printf("5)CAGUAMA       30$\n");
    printf("6)COCA COLA     13$\n");
    printf("7) JUGO JUMEX   11$\n");
     printf("0) PAGAR $\n");
   printf("ingrese la clave de los articulos : ");
   scanf("%d",&seleccion);
switch(seleccion){
 case 1 :
printf("\n usted ordeno unos rufles es esto cierto \n");
printf("presione 1 para confirmar o 0 para cancelar : ");
scanf("%d",&clavepago);
if(clavepago==1){
    totalcompra=(totalcompra+9);
    nproductos++;
}
break;
case 2:
printf("\n usted ordeno unos chetos es esto cierto \n");
printf("presione 1 para confirmar o 0 para cancelar : ");
scanf("%d",&clavepago);
if(clavepago==1){
    totalcompra=(totalcompra+7);
    nproductos++;
}
break;
case 3:
printf("\n usted ordeno unos doritos es esto cierto \n");
printf("presione 1 para confirmar o 0 para cancelar : ");
scanf("%d",&clavepago);
if(clavepago==1){
    totalcompra=(totalcompra+8);
    nproductos++;
}
break;
case 4:
printf("\n usted ordeno un paketaxo es esto cierto \n");
printf("presione 1 para confirmar o 0 para cancelar : ");
scanf("%d",&clavepago);
if(clavepago==1){
    totalcompra=(totalcompra+10);
    nproductos++;
}
break;
case 5:
printf("\n usted ordeno una caguama es esto cierto \n");
printf("presione 1 para confirmar o 0 para cancelar : ");
scanf("%d",&clavepago);
if(clavepago==1){
    totalcompra=(totalcompra+30);
    nproductos++;
}
break;
case 6:
printf("\n usted ordeno una coca cola es esto cierto \n");
printf("presione 1 para confirmar o 0 para cancelar : ");
scanf("%d",&clavepago);
if(clavepago==1){
    totalcompra=(totalcompra+13);
    nproductos++;
}
break;
case 7:
printf("\n usted ordeno un jugo es esto cierto \n");
printf("presione 1 para confirmar o 0 para cancelar : ");
scanf("%d",&clavepago);
if(clavepago==1){
    totalcompra=(totalcompra+11);
    nproductos++;
}
break;

}
    }while(seleccion!=0);
printf("el total a pagar es :%d \n",totalcompra);
precio=totalcompra;


    /*La variable temp es para ir guardando lo que sobra de cada divicion*/
   // printf ("Teclea Precio: ");
   // scanf ("%d", &precio);
pide_dinero:            /*Defino etiqueta pide_dinero*/
    printf ("Teclea Cantidad pagada: ");
    scanf ("%d", &pagada);
    if (pagada<precio)      /*que tal si alguien quiere pagar menos de lo que debe*/
    {
       printf ("\nFalta dinero!\n\n");
       goto pide_dinero;   /*busca la etiqueta pide_dinero*/
    }
    cambio=pagada-precio;      /*Vemos cuanto sobra (diferencia de pagado y precio)*/
    b500=cambio/500;      /*Dividimos el cambio entre 500*/
    temp=cambio%500;      /*Al temporal le asignamos el Modulo (lo que sobra) de la division de 500*/
     b200=temp/200;
    temp%=200;         /*Lo mismo que poner temp=temp%200*/
    b100=temp/100;
    temp%=100;
    b50=temp/50;
    temp%=50;
    b20=temp/20;
    temp%=20;
    m10=temp/10;
    temp%=10;
    m5=temp/5;
    temp%=5;
    m2=temp/2;
    m1=temp%2;         /*ya no use temp por que las de 1 es que sobra de las de 2 */
    printf ("\nPrecio: %d\n", precio);
    printf ("Cantidad pagada: %d\n", pagada);
    printf ("Cambio: %d\n\n", cambio);
    printf ("Desglose:\n\n");
    printf ("Billetes de 500: %d\n", b500);
    printf ("Billetes de 200: %d\n", b200);
    printf ("Billetes de 100: %d\n", b100);
    printf ("Billetes de 50: %d\n", b50);
    printf ("Billetes de 20: %d\n", b20);
    printf ("Billetes de 10: %d\n", m10);
     printf ("Monedas de 5: %d\n", m5);
    printf ("Monedas de 2: %d\n", m2);
    printf ("Monedas de 1: %d\n", m1);
     printf ("Monedas de 50c: %d\n", m50c);
    system ("Pause");

totaldia=totaldia+precio;
nclientes++;
printf("GRACIAS POR LA COMPRA \n");
printf("deseas agregar un nuevo cliente  ");
printf("\n 0 para si y 1 para terminar el dia :");
 scanf("%d",&salir);
}while(salir!=1);

 nproductos=nproductos+productosvend;

 printf("productos vendidos en el dia :%d \n",nproductos);
 printf("clientes atendidos en el dia :%d \n",nclientes);
printf("el total de dinero recibido en el dia es :%d \n",totaldia);
system("pause");

     return 0;
 }
