#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

struct Cliente
 {
     char cpf[11];
     char nome[30];
     char endereco [30];
     char cidade [25];
     char bairro [25];
     char cep[8];
 };
 void AddCliente();
 void LstCliente();
 void GravarDados (struct Cliente novoCliente);

 int main (){

     char opcao;
     while (1) {
        system("cls");
        printf("Seja bem-vindo a clinica UNIP\n\n");
        printf(" 1 - Fazer login\n\n");
        printf(" 2 - Cadastrar\n\n");
        scanf("%d", &opcao);

        switch (opcao) {
    case 1:
        AddCliente();
        break;
    case 2:
        LstCliente();
    case 3:
        exit(1);
        }
     }
     void AddCliente (){
    system("CLS");
    struct Cliente novoCliente;

    fflush (stdin);
    printf("\n CPF =======> * ");
    gets(novoCliente . cpf);

    GravarDados (novoCliente);
     }

void GravarDados (struct Cliente novoCliente){
    FILE *fp;
    if(( fp = fopen ("database.db" , "a+")) == NULL)
        printf("Erro ao abrir o arquivo");
    fwrite (&novoCliente ,sizeof(struct Cliente),1,fp);
    fclose(fp);
    }
void LstCliente (){
    system("cls");
    struct Cliente cliente;

    FILE *fp;
        if((fp = fopen("database.db" , "a+")) ==NULL)
            printf("Falha ao tentar encontrar o arquivo");
        exit(1);
    }
/*    while (fread(&cliente , sizeof(struct Cliente),1,fp)){
        printf ("\n CPF %s" , cliente . cpf);
        fclose(fp);
        printf("pressione qualquer tecla");
        getche();
    }*/
}
