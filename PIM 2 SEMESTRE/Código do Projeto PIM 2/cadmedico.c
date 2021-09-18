#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

int cadmedicos(){

    char redirecionamento[200];//="..\\Sistema de Clinicas UNIP\\consultas\\";
    char nomearquivo[100]; //variavel q vai receber o nome do arquivo

FILE *pont_arq3; //criar ponteiro para arquivo txt
    pont_arq3 = fopen("..\\Sistema de Clinicas UNIP\\cadastro de medicos\\arquivo_nome.txt" ,"w"); // abrir arquivo com tipo de abertura ''w'' formato de gravação de dados
    if(pont_arq3 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");


    char nome[50],espec[50],idade[50];
    printf("\nNome e Sobrenome:");
    fflush(stdin);
    gets(nome);
    fprintf(pont_arq3, "Nome e Sobrenome:%s",&nome);
    printf("\nEspecialidade:");
    fflush(stdin);
    gets(espec);
    fprintf(pont_arq3, "\nEspecialidade:%s",&espec);
    printf("\nIdade:");
    scanf("%s",&idade);
    fprintf(pont_arq3, "\nIdade:%s",&idade);
    fclose(pont_arq3);

    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\cadastro de medicos\\");
    printf("\nATENÇÂO: Digite o primeiro nome do medico-unidade da rede e em seguida o formato .txt: ");
    printf("\nExemplo de arquivo: julio-leste.txt  ");
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);
    rename("..\\Sistema de Clinicas UNIP\\cadastro de medicos\\arquivo_nome.txt",redirecionamento);
    menuorquit();
    }
}

