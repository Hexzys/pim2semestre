#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int cadfunc(){

    char redirecionamento[200];//="..\\Sistema de Clinicas UNIP\\consultas\\";
    char nomearquivo[100]; //variavel q vai receber o nome do arquivo

 FILE *pont_arq4; //criar ponteiro para arquivo txt
    pont_arq4 = fopen("..\\Sistema de Clinicas UNIP\\cadastro de funcionarios\\arquivo_nome.txt" ,"w"); // abrir arquivo com tipo de abertura ''w'' formato de gravação de dados
    if(pont_arq4 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
            system("pause");
           return 1;
       }
       else
        {
      system("cls");

    //cadastrarfuncionario
    char nome[50],espec[50],idade[50],cid[50],rede[50];
    printf("\nNome e Sobrenome:");
    fflush(stdin);
    gets(nome);
    fprintf(pont_arq4,"Nome e sobrenome:%s",nome);
    printf("\nUnidade de Rede:");
    fflush(stdin);
    gets(nome);
    fprintf(pont_arq4,"Unidade de Rede:%s",rede);
    printf("\nEspecialidade:");
    fflush(stdin);
    gets(espec);
    fprintf(pont_arq4,"\nEspecialidade:%s",espec);
    printf("\nIdade:");
    scanf("%s",&idade);
    fprintf(pont_arq4,"\nIdade:%s",idade);
    printf("\nCidade:");
    fflush(stdin);
    gets(cid);
    fprintf(pont_arq4,"\nCidade:%s",cid);

    fclose(pont_arq4);

strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\cadastro de funcionarios\\");
printf("\nATENÇÂO: Digite o primeiro nome do funcionario-unidade da rede e em seguida o formato .txt: ");
    printf("\nExemplo de arquivo: marcos-leste.txt  ");
scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
strcat(redirecionamento,nomearquivo);
rename("..\\Sistema de Clinicas UNIP\\cadastro de funcionarios\\arquivo_nome.txt",redirecionamento);
menuorquit();
        }
}
