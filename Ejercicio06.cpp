#include <stdio.h>
#include <stdlib.h>
int main () {
int a,b;
printf("Calcular el valor de la funcion f(x)\n");
printf("f(x)= x+3 si x<=0\n x^2+2x si x>0\n");
printf ("Introduzca el valor de x:");
scanf("%d",&a);
if (a>0) {
    b=a*a+a*2;
}
    else{
        b=3+a;
    }
printf("El resultado es:%d",b);
}


