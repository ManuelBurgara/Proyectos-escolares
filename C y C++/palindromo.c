#include <stdio.h>//permite usar funciones de entrada/salida como printf y scanf.
#include <stdlib.h> // se usa para funciones como system("cls") y system("color 1F").
#include<string.h> // permite trabajar con cadenas de texto (strlen, strcmp, etc.).
#include <ctype.h>//ctype.h: da acceso a funciones como tolower() para convertir caracteres a minúsculas.
int a;
int main(){
    do{
 system("cls");
 system("color 1F");

char cadena[100],copia[100];

printf("ingrese palabra \n:");
gets(cadena);
for(int i=(strlen(cadena)-1);i>=0;i--){
  copia[strlen(cadena)-1-i]=cadena[i];
 }
 copia[strlen(cadena)]='\0';
 if(strcmp(cadena,copia)==0){
  printf("Es palindromo\n");
 }else{
  printf("No es palindromo \n");
 }
 system("pause");
 printf("1 repetir 0 salir ");
 scanf("%d",&a);

 }while(a!=0);
return 0;
}
