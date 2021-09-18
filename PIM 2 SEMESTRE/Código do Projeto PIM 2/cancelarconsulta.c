#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

cancelarconsulta(){

char nomearquivo[100];
char redirecionamento[200];
    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\consultas\\");
    printf ("Caso não saiba o ID da consulta, Verifique na pasta 'consultas'");

    FILE *pont_arqq; // mostrar txts
pont_arqq = fopen("..\\Sistema de Clinicas UNIP\\consultas\\" , "r");
 DIR *dir;
    struct dirent *sul;
    dir = opendir("..\\Sistema de Clinicas UNIP\\consultas\\");
    while ((sul = readdir(dir))!=NULL){
        printf ("\nConsultas Registradas no Sistema: %s\n ", sul->d_name);
        fprintf(pont_arqq, "\nConsultas registradas no Sistema: %s\n ", sul->d_name); }
   closedir(dir);
    fclose(pont_arqq); // fim mostrar txts

    printf("\nPor favor digite o ID da consulta que você deseja desmarcar:");
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);

FILE *pont_arq8; //criar ponteiro para arquivo txt
    pont_arq8 = fopen(redirecionamento, "w");
     if(pont_arq8 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");
    fprintf(pont_arq8,"A consulta id %s foi desmarcada.",nomearquivo);
fclose(pont_arq8);
    funcmenu();
    }

}

   // rename("..\\Sistema de Clinicas UNIP\\cadastro de medicos\\arquivo_nome.txt",redirecionamento);
