#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Pessoa
{
  int codigo;
  char nome[50];
  char telefone[20];
  char email[50];
  char nascimento[10];
  char observacoes[100];
  struct Pessoa *proximo;
} Pessoa;

void listar(Pessoa *aux)
{
  while(aux != NULL)
  {

    printf("Codigo: %i\n", aux->codigo);
    printf("Nome: %s\n", aux->nome);
    printf("Telefone: %s\n", aux->telefone);
    printf("Email: %s\n", aux->email);
    printf("Nascimento: %s\n", aux->nascimento);
    printf("Observacoes: %s\n", aux->observacoes);
    aux = aux->proximo;

  }

}


int main(void) {

  //Declarando ponteiro raiz da lista
  Pessoa *p = NULL, *aux = NULL, *ultimo = NULL;
  int i, op;

  do{
  
    aux = malloc(sizeof(Pessoa));

    printf("Digite o código: ");
    scanf("%i", &aux->codigo);

    printf("Digite o nome: ");
    scanf("%s", aux->nome);

    printf("Digite o telefone: ");
    scanf("%s", aux->telefone);

    printf("Digite o email: ");
    scanf("%s", aux->telefone);

    printf("Digite o nascimento: ");
    scanf("%s", aux->nascimento);

    printf("Digite o observacoes: ");
    scanf("%s", aux->observacoes);

    aux->proximo = NULL;

    if(p == NULL){
      p = aux;
      ultimo = aux;
    }
    else{
      ultimo->proximo = aux;
      ultimo = aux;
    }

    printf("Deseja continuar inserindo registros? (1-Sim / 0-Nao)");
    scanf("%i", &op);

  }while(op > 0);

  //Exibindo registros da lista
  printf("\n----------\n");
 
  listar(p);

  return 0;
}