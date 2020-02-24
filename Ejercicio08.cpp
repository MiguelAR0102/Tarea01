#include <stdio.h>
#include <stdlib.h>
int main () {
    int a,b,c;
    printf ("Introduzca el primer numero:");
    scanf("%d",&a);
    printf ("Introduzca el segundo numero:");
    scanf("%d",&b);
    printf ("Introduzca el tercer numero:");
    scanf("%d",&c);
 if (a>b && b>c){
     printf("%d",c);
     printf("%d",b);
     printf("%d",a);
     }
else if (a>b && b<c){
    printf("%d",b);
     printf("%d",c);
     printf("%d",a);
     }
else if (c>a && b<a){
    printf("%d",b);
     printf("%d",a);
     printf("%d",c);
}
else if (a<b && c>b){
    printf("%d",a);
     printf("%d",b);
     printf("%d",c);
     }
else if(b>a && a>c){
    printf("%d",c);
     printf("%d",a);
     printf("%d",b);
     }
else{
    printf("%d",a);
     printf("%d",c);
     printf("%d",b);
     }

}
