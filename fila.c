#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

#define TAM_FILA 3

int fila[TAM_FILA], ultimaPosicao=0;

void enfileirar(int valor){

  if(cheia()){

    printf("Fila cheia!");

  }
  else{

    fila[ultimaPosicao] = valor;
    ultimaPosicao++;

  }

}

int desenfileirar(){
  
  int itemRetirado = 0;

  if(vazia()){

    printf("Fila vazia!");

  }
  else{

    itemRetirado = fila[0];

    //Fazer a fila andar
    for(int i=0; i < ultimaPosicao-1; i++){
      fila[i] = fila[i+1];
    }

    ultimaPosicao--;

  }

  return itemRetirado;

}

int vazia(){

  if(ultimaPosicao == 0){
    return 1;
  }
  else{
    return 0;
  }

}

int cheia(){

  if(ultimaPosicao == TAM_FILA){
    return 1;
  }
  else{
    return 0;
  }

}

void exibir(){

  if(vazia()){

    printf("Fila vazia!");

  }
  else{

    for(int i=0; i<ultimaPosicao; i++){
      printf("%i\n", fila[i]);
    }

  }

}