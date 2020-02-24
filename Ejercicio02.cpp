#include <stdio.h>
#include <stdlib.h>
int main () {
float a,b,c;
printf ("Introduzca el valor numerico de a:");
scanf ("%d",&a);
printf ("Introduzca el valor numerico de b:");
scanf ("%d",&b);
if (b==0) {
    printf ("los valores no son divisibles");
}
else {
        c=a/b;
    printf ("El valor a es divisible entre el valor b, el resultado es: %f",c);
}
}
