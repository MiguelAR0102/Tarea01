  #include <stdio.h>
  #include <stdlib.h>
  int main () {
      char val;
          printf("Introduzca un numero o caracter:");
          val=getchar();
  if (val>=48 && val<=57 ){
        printf("introdujo un numero");
    }
    else {
           printf("introdujo un caracter");

}
}
