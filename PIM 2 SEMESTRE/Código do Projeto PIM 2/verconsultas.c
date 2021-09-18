#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

verconsultas(){

char nomearquivo[100];
char redirecionamento[200];
char conteudo[2000];



    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\consultas\\");

    FILE *pont_arq16; //criar ponteiro para arquivo txt
    pont_arq16 = fopen("..\\Sistema de Clinicas UNIP\\relatorios\\total_pacientes.txt","w");

    DIR *dir;
    struct dirent *sul;
    dir = opendir("..\\Sistema de Clinicas UNIP\\consultas");
    while ((sul = readdir(dir))!=NULL){
        printf ("\n Consultas registradas no sistema: %s\n ", sul->d_name);
        fprintf(pont_arq16, "\n Consultas registradas no sistema: %s\n ", sul->d_name); }
    closedir(dir);
    fclose(pont_arq16);
    setcolor(244);
    printf("Digite o arquivo da consulta que você deseja visualizar:");
    setcolor(242);
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);

FILE *pont_arq7; //criar ponteiro para arquivo txt
    pont_arq7 = fopen(redirecionamento, "r");
     if(pont_arq7 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");
   // printf("deu certo");

        while(fgets(conteudo,2000,pont_arq7)!= NULL)
        printf("%s",conteudo);

fclose(pont_arq7);
    menuorquit();
    }
}

   // rename("..\\Sistema de Clinicas UNIP\\cadastro de medicos\\arquivo_nome.txt",redirecionamento);
