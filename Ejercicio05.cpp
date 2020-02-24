#include <stdio.h>
#include <stdlib.h>
int main () {
int a,b,c,d;
printf ("Precio\n Niños:$30\n Adultos: $75\n Adultos mayores de 60: $35\n");
printf("Numero de boletos\n");
printf("No. de niños:");
scanf ("%d",&a);
printf("No de adultos:");
scanf ("%d",&b);
printf("No. de adultos mayores de 60:");
scanf ("%d",&c);
d=(30*a+75*b+35*c);
printf("El precio es: $%d",d);
}

