#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

    typedef struct{
    char login[30];
    char senha [30];
} pessoa; pessoa p[1];


int cadpacientes(); //prototipos de fun��o
int funcmenu();
void vermedicos();

int main(){
    system("COLOR F2");
    int menu; //variaveis
    setlocale(LC_ALL, "");

    char login[30];
    char senha[30];
    strcpy(p[0].login, "admin");
    strcpy(p[0].senha, "admin");

    setcolor(244);
    printf("ATEN��O:Nome de Usuario:admin Senha:admin");
    setcolor(242);
    printf("\n\n\n\t\t\t\t\tSeja Bem-vindo a Clinica VitaMED!");
    printf("\n\n\n\n\n\t                              Digite o Nome de Usuario:");
    scanf("%s",login);
    printf("\n\t\t                              Digite sua senha:");
    scanf("%s", senha);

    if((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){
            testararquivos();
            funcmenu(); //caso a senha esteja correta ser� redirecionado a fun��o menu.

}
    else{
        system("cls");
        printf("\nLogin e ou senha incorretos.");
    }
    return 0;
}


int funcmenu(){

int opcoesmenu;

    system("cls");
            printf("\nAdministrador Logado.");
            printf("\n\n\n\n\t                              Bem vindo ao Menu das Cl�nicas VitaMED");

            printf("\n\n\t 1 - Cadastro de Pacientes");
            printf("\n\n\t 2 - Agendamento de Consulta");
            printf("\n\n\t 3 - Cadastrar M�dicos");
            printf("\n\n\t 4 - Cadastrar Funcion�rios");
            printf("\n\n\t 5 - Elogios e Reclama��es ");
            printf("\n\n\t 6 - Ver M�dicos");
            printf("\n\n\t 7 - Ver Consultas");
            printf("\n\n\t 8 - Cancelamento de Consultas");
            printf("\n\n\t 9 - Relat�rio de pacientes por unidade da rede");
            printf("\n\n\t 10 - Relat�rio de unidade que mais atende");
            printf("\n\n\t 11 - Relat�rio de faturamento di�rio e mensal por unidade");
            printf("\n\n\t 12 - Relat�rio de faturamento di�rio e mensal de toda rede");

            printf("\n\n\n\tDigite uma opcao para prosseguir:");
            scanf("%d", &opcoesmenu);
    switch(opcoesmenu)
    {
case 1:
    cadpacientes();
break;
case 2:
    agendconsulta();
break;
case 3:
    cadmedicos();
break;
case 4:
    cadfunc();
break;
case 5:
    feedback();
break;
case 6:
    vermedicos();
break;
case 7:
    verconsultas();
break;
case 8:
    cancelarconsulta();
break;
case 9:
    verpacientes();
break;
case 10:
    verunidade();
break;
case 11:
    vertotal();
break;
case 12:
    vertotalrede();
break;
    }
}

void setcolor( const int color)
{
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), color);

}

