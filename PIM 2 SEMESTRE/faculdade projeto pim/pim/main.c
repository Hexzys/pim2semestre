#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>



    typedef struct{
    char login[30];
    char senha [30];
} pessoa; pessoa p[1];


int cadpacientes(); //prototipos de fun��o
int funcmenu();


int main(){

    int menu; //variaveis
    setlocale(LC_ALL, "");

    char login[30];
    char senha[30];
    strcpy(p[0].login, "funcionario");
    strcpy(p[0].senha, "funcionario");

    printf("\n\t\t\t\t\tBem vindo a Clinica ADS");

    printf("\n\tDigite o Nome de Usuario:");
    scanf("%s",login);
    printf("\n\t\tDigite sua senha:");
    scanf("%s", senha);

    if((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){
            funcmenu(); //caso a senha esteja correta ser� redirecionado a fun��o menu.
}
    else{
        system("cls");
        printf("\nLogin e ou senha incorretos.");
    }
    return 0;
}




int cadpacientes(){

 FILE *pont_arq; //criar ponteiro para arquivo txt
    pont_arq = fopen("arquivo_nome.txt" ,"w"); // abrir arquivo com tipo de abertura ''w'' formato de grava��o de dados
    if(pont_arq == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");
//sistema de cadastro de pacientes
    char nome[100],sob[100],sexo[100],cid[100],est[100],al[100],end[100],year[100],dia[100],mes[100],ddd[100],tel[100],rede[100];
  //  int year,dia,mes,ddd,tel,at;
    printf("\n\t    Dados pessoais \n");
    printf("Primeiro nome: ");
    fflush(stdin);
    gets(nome);
    fprintf(pont_arq, "\nNome:%s",&nome); //prints do ponteiro
    printf("Sobrenome: ");
    scanf("%s",&sob);
    fprintf(pont_arq, "\nSobrenome:%s",&sob);
    printf("Sexo: ");
    scanf("%s",&sexo);
    fprintf(pont_arq, "\nSexo:%s",&sexo);
    printf("\nData de Nascimento");
    printf("\nDia:");
    scanf("%s",&dia);
    fprintf(pont_arq, "\nDia:%s",&dia);
    printf("Mes:");
    scanf("%s",&mes);
    fprintf(pont_arq, "\nMes:%s",&mes);
    printf("Ano:");
    scanf("%s",&year);
    fprintf(pont_arq, "\nAno:%s",&year);

    printf("\t Contato e informacoes adicionais\n\n");
    printf("Telefone: ");
    scanf("%s",&tel);
    fprintf(pont_arq, "\nTelefone:%s",&tel);
    printf("Estado(ex: SP) :");
    fflush(stdin);
    gets(est);
    //scanf("%s",&est);
    fprintf(pont_arq, "\nEstado:%s",&est);
    printf("Cidade (Ex: Guaruja) :");
    fflush(stdin);
    gets(cid);
    fprintf(pont_arq, "\nCidade:%s",&cid);
    printf("Unidade de Rede (Exemplo: Oeste)");
    scanf("%s",&rede);
    fprintf(pont_arq,"\nUnidade de Rede:%s",&rede);
    //a utiliza��o do gets � para conseguir utilizar caracteres especiais e o fflush limpa o buffer
//teste

fclose(pont_arq);
        }
}

int agendconsulta(){
    char nome[50],especialidade[50],medico[50],horario[50];
 FILE *pont_arq2; //criar ponteiro para arquivo txt
    pont_arq2 = fopen("arquivo_nome.txt" ,"w"); // abrir arquivo com tipo de abertura ''w'' formato de grava��o de dados
    if(pont_arq2 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");


    printf("Nome e sobrenome:");
    fflush(stdin);
    gets(nome);
    fprintf(pont_arq2, "\nNome:%s",&nome);
    printf("\nEspecialidade Ex:Endrocinologista");
    scanf("%s",especialidade);
    fprintf(pont_arq2, "\nEspecialidade:%s",&especialidade);
    printf("\nHor�rio da consulta:");
    fflush(stdin);
    gets(horario);
    fprintf(pont_arq2, "\nHor�rio:%s",&horario);
    printf("\nM�dico:");
    scanf("%s",medico);
    fprintf(pont_arq2, "\nM�dico:%s",&medico);





fclose(pont_arq2);
renomear();
        }
}


int funcmenu(){

int opcoesmenu;

    system("cls");
            printf("\nUsuario Logado");
            printf("\n\n\n\n\tBem vindo ao Menu");

            printf("\n\n\t 1 ------ Cadastro de Pacientes -------");
            printf("\n\n\t 2 ------ Agendamento de Consulta -------");
            printf("\n\n\t 3 ------ M�dicos -------");
            printf("\n\n\t 4 ------ Cadastrar M�dicos -------");
            printf("\n\n\t 6 ------ Ver Consultas -------");
            printf("\n\n\t 7 ------ Cadastro de Funcion�rios -------");
            printf("\n\n\t 8 ------ Reclama��es e Elogios -------");
            printf("\n\n\t 9 ------ Cancelamento de Conultas -------");


            printf("\n\n\tDigite uma opcao para prosseguir:");
            scanf("%d", &opcoesmenu);
    switch(opcoesmenu)
    {


case 1:
    cadpacientes();
break;
case 2:
    agendconsulta();
break;
/*case 3:
    medicos();*/
case 3:
    cadmedicos();
break;
case 4:
    cadfunc();
break;
    }
}

int cadmedicos(){
    int nome,espec,idade;
    printf("\nNome e Sobrenome");
    scanf("%s",&nome);
    printf("\nEspecialidade:");
    scanf("%s",&espec);
    printf("\n Idade");
    scanf("%d",&idade);
}
int cadfunc(){
    //cadastrarfuncionario
    int nome,espec,idade;
    printf("\nNome e Sobrenome:");
    scanf("%s",&nome);
    printf("\nEspecialidade:");
    scanf("%s",&espec);
    printf("\nIdade:");
    scanf("%d",&idade);
}
int renomear(){ //fun��o para renomear o nome dos arquivos txt toda vez que rodar o programa
    char novonome[50];
    printf("\nDigite o nome do arquivo Exemplo(Nelson.txt):");
    scanf("%s",&novonome);
 rename("arquivo_nome.txt",novonome);

}




