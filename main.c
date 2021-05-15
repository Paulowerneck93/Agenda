#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(void) {

  enfileirar(1);
  enfileirar(2);
  enfileirar(3);
  
  exibir();

  printf("Desenfileirando:\n\n");
  printf("%i\n", desenfileirar());
  printf("%i\n", desenfileirar());
  printf("%i\n", desenfileirar());

  printf("\n\n");

  exibir();

  return 0;
}