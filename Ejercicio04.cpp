#include <stdio.h>
#include <stdlib.h>
int main () {
int a,b;
printf("Introduzca el primer numero entero:");
scanf("%d",&a);
printf("Introduzca el segundo numero entero:");
scanf("%d",&b);
if (a>b){
    printf("%d es mayor que %d",a,b);
}
else if (a==b){
    printf("%d es igual a %d",a,b);
}
else{
    printf("%d es menor que %d",a,b);
}
}
