#include <stdio.h>
  #include <stdlib.h>
  int main () {
      char val;
          printf("Introduzca un numero o caracter:");
          val=getchar ();
  switch (val) {
  case 48:
  case 49:
  case 50:
  case 51:
  case 52:
  case 53:
  case 54:
  case 55:
  case 56:
  case 57:
      printf("Introdujo un numero");
      break;
  default:;
  printf("introdujo un caracter");
  }
  }
