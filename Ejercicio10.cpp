#include <stdio.h>
#include <stdlib.h>
int main (){
  float a,b,c,d;
  int opt;
  printf (" 1.- Calcular el area de un triangulo\n 2.- Calcular el area de un trapecio\n 3.- Calcular el area de un rectangulo\n");
  printf ("seleccione una opcion");
  scanf ("%d",&opt);
  switch (opt){
  case 1:
    printf("base:");
    scanf("%f",&a);
    printf ("altura:");
    scanf ("%f",&b);
    c=(a*b)/2;
    break;
  case 2:
    printf("lado A:");
    scanf ("%f",&a);
    printf("lado B:");
    scanf ("%f",&b);
    printf ("altura:");
    scanf("%f",&d);
    c=((a+b)/2)*d;
    break;
  case 3:
    printf("base:");
    scanf("%f",&a);
    printf("altura:");
    scanf("%f",&b);
    c=a*b;
    break;
default:;
}
printf("El resultado es %f",c);
}
