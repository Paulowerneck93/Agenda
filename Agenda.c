#include <stdio.h>
#include <string.h>

#define TAM_VET_PESSOA 10

typedef struct Pessoa //Estrutura de dados coletados
{
    int codigo;
    char nome[50];
    char telefone[20];
    char email[50];
    char nascimento[10];
    char observacoes[100];
}   Pessoa;

int main(void)
{
    Pessoa contato [10];

    for (int i = 0; i < 10; i++) //Estrutura de repetição para cadastro
    {
        printf("\nCodigo: ");
        scanf("%d", &contato[i].codigo);

        printf("Nome completo: ");
        scanf("%s", &contato[i].nome);

        printf("Telefone: ");
        scanf("%s", &contato[i].telefone);

        printf("E-mail: ");
        scanf("%s", &contato[i].email);

        printf("Nascimento: ");
        scanf("%s", &contato[i].nascimento);

        printf("Observacoes: ");
        scanf("%s", &contato[i].observacoes);

    }

    for (int i = 0; i < 10; i++) //Estrutura de repetição para imprimir
    {
        printf("%d\n", contato[i].codigo);
        printf("%s\n", contato[i].nome);
        printf("%s\n", contato[i].telefone);
        printf("%s\n", contato[i].email);
        printf("%s\n", contato[i].nascimento);
        printf("%s\n", contato[i].observacoes);
    }


return 0;
}