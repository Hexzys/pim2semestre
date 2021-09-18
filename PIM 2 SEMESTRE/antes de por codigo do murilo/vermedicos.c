#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

vermedicos(){

char nomearquivo[100];
char redirecionamento[200];
char conteudo[2000];



FILE *pont_arq6;
    pont_arq6 = fopen("..\\Sistema de Clinicas UNIP\\cadastro de medicos\\","r");
DIR *dir;
    struct dirent *med;
    dir = opendir("..\\Sistema de Clinicas UNIP\\cadastro de medicos\\");
    while ((med = readdir(dir))!=NULL){
        printf ("\n Médicos registrados no sistema: %s\n ", med->d_name);
        fprintf(pont_arq6, "\n Médicos registrados no sistema: %s\n ", med->d_name); }
        closedir(dir);
    fclose(pont_arq6);

    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\cadastro de medicos\\");
    setcolor(244);
    printf("Digite o ID do Médico que você deseja visualizar:");
    setcolor(242);
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);


FILE *pont_arq5; //criar ponteiro para arquivo txt
    pont_arq5 = fopen(redirecionamento, "r");
     if(pont_arq5 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");
   // printf("deu certo");


    while(fgets(conteudo,2000,pont_arq5)!= NULL)
        printf("%s",conteudo);

fclose(pont_arq5);

    menuorquit();

    }
}



   // rename("..\\Sistema de Clinicas UNIP\\cadastro de medicos\\arquivo_nome.txt",redirecionamento);
