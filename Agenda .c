#include <stdio.h>
#include <string.h>

struct pessoa //Estrutura para dados coletados
{
    int codigo;
    char nome[50];
    char telefone[20];
    char email[50];
    char nascimento[10];
    char observacoes[100];
};

    
    struct pessoa contato[10];
    int cont = 1;

    void cadastro() //Cadastrar contatos
{
    int opCadastro;


        for (cont = 0; cont < 10; cont++)
        {
            if (cont < 10)
            {

            printf("\nCodigo: ");
            scanf("%d", &contato[cont].codigo);

            while (contato[cont].codigo < 1);
            {
            
            printf("\nNome completo: ");
            scanf("%s", contato[cont].nome); 

            printf("\nTelefone: ");
            scanf("%s", contato[cont].telefone);

            printf("\nE-mail: ");
            scanf("%s", contato[cont].email);

            printf("\nNascimento: ");
            scanf("%s", contato[cont].nascimento);

            printf("\nObservacoes: ");
            scanf("%s", contato[cont].observacoes);
            }

        }
        else
            printf("\nAgenda cheia");
            printf("\nDeseja fazer outro cadastro?");
            printf("\n1 - Sim");
            printf("\n2 - Nao\n");
            scanf("\n%d", &opCadastro);
                if(opCadastro == 2)
                {
                    break;
                }
            }
        }        
    void listar() //Listar todos os cadastros
    {
    for (cont = 0; cont < 10 && contato[cont].codigo > 0; cont++)
    {
        printf("%d\n", contato[cont].codigo);
        printf("%s\n", contato[cont].nome);
        printf("%s\n", contato[cont].telefone);
        printf("%s\n", contato[cont].email);
        printf("%s\n", contato[cont].nascimento);
        printf("%s\n", contato[cont].observacoes);
    }
    
}

    void buscar() //Buscar um cadastro específico
        
    {
        int buscar;

        printf("\nDigite o codigo que deseja buscar: ");
        scanf("%d", &buscar);
        for(cont = 0; cont < 10; cont++)
        {
            if(buscar == contato[cont].codigo)

            {
            printf("\nCodigo: ");
            printf("%d\n", contato[cont].codigo);

            printf("Nome ");
            printf("%s\n", contato[cont].nome);

            printf("Telefone: ");
            printf("%s\n", contato[cont].telefone);

            printf("email: ");
            printf("%s\n", contato[cont].email);

            printf("Nascimento: ");
            printf("%s\n", contato[cont].nascimento);

            printf("Observacoes: ");
            printf("%s\n", contato[cont].observacoes);
            }
            else break;

            
        }
        
    
    }
        
    void menu() //Menu para o usuário
    {
        int opMenu;
        do
        {
        printf(" 1 - Cadastrar\n");
        printf(" 2 - Listar\n");
        printf(" 3 - Buscar\n");
        printf(" 4 - Alterar\n");
        printf(" 5 - Excluir\n");
        printf(" 0 - Sair\n");
        scanf("%d", &opMenu);

       switch (opMenu)
        {
            case 1:
                cadastro();
                break;

            case 2:
                listar();
                break;

            case 3:
                buscar();
                break;                


            default:
            printf("Opcao Invalida");
            break;
        }
    } while (opMenu != 0);
}


int main () {
   
    menu();
}