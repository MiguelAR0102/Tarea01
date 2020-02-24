#include <stdio.h>
#include <stdlib.h>
int main () {
int a;
printf ("Introduzca un numero entero:");
scanf ("%d",&a);
if (a%2==0) {
printf("%d es par",a);
}
else if (a%3==0) {
    printf("%d es impar, pero es divisible entre 3",a);
}
else {
    printf("%d es impar",a);
}
}
