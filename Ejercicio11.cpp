#include <stdlib.h>
#include <stdio.h>
int main (){
    float x1,x2,y1,y2,m;
printf("Calcular la pendiente entre dos puntos\n Introduzca el primer punto\n");
printf("x1:");
scanf("%f",&x1);
printf("y1:");
scanf("%f",&y1);
printf("Introduzca el segundo punto\n");
printf("x2:");
scanf("%f",&x2);
printf("y2:");
scanf("%f",&y2);
m=(y2-y1)/(x2-x1);
if (x1-x2==0){
    printf("La linea es vertical");
}
else {
printf("La pendiente es:%f",m);
}
}
