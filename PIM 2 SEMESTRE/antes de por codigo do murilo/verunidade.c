#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>


int verunidade(){

system("cls");
char cons[50];
int valor=0,soma=0, atendleste, atendsul, atendoeste;

FILE *pont_arq18; //criar ponteiro para arquivo txt
    pont_arq18 = fopen("..\\Sistema de Clinicas UNIP\\relatorios\\total_consulta.txt" ,"w");

  printf("digite a palavra consulta para fazer uma pesquisa nos registros. ");
  scanf("%s",&cons);
  fprintf(pont_arq18, "\n Consultas de cada unidade %s");

//o comando DIR imprime na tela quantos arquivos existem no diretorio da pasta

  DIR *dir;
    struct dirent *sul;
    dir = opendir("..\\Sistema de Clinicas UNIP\\contabilidadesul");
    while ((sul = readdir(dir))!=NULL){
        printf ("\n CONSULTAS UNIDADE SUL: %s\n", sul->d_name);
        fprintf(pont_arq18, "\n CONSULTAS UNIDADE SUL: %s\n", sul->d_name); }
   closedir(dir);

     DIR *dir1;
    struct dirent *leste;
    dir = opendir("..\\Sistema de Clinicas UNIP\\contabilidadeleste");
    while ((leste = readdir(dir))!=NULL){
        printf ("\n\n CONSULTAS UNIDADE LESTE %s\n", leste->d_name);
        fprintf(pont_arq18, "\n CONSULTAS UNIDADE LESTE: %s\n", leste->d_name); }
   closedir(dir);

     DIR *dir2;
    struct dirent *oeste;
    dir = opendir("..\\Sistema de Clinicas UNIP\\contabilidadeoeste");
    while ((oeste = readdir(dir)) != NULL){
        printf ("\n\n CONSULTAS UNIDADE OESTE %s\n", oeste->d_name);
        fprintf(pont_arq18, "\n CONSULTAS UNIDADE OESTE: %s\n", oeste->d_name); }
   closedir(dir);

    printf("\n\n Digite o numero de consultas da unidade Sul: ");
    scanf("%d",&atendsul);
    printf("Digite o numero de consultas da unidade Leste: ");
    scanf("%d",&atendleste);
    printf("Digite o numero de consultas da unidade Oeste: ");
    scanf("%d",&atendoeste);

    if (atendsul>atendleste && atendsul>atendoeste){
    printf("\n A unidade que mais atendeu é: Sul");
    fprintf(pont_arq18, "\n A unidade que mais atendeu é: Sul");
    }
    else if(atendsul<atendleste && atendleste>atendoeste){
    printf("\n A unidade que mais atendeu é: Leste ");
    fprintf(pont_arq18, "\n A unidade que mais atendeu é: Leste");
    }
    else{
    printf("\n A unidade que mais atendeu é: Oeste ");
    fprintf(pont_arq18, "\n A unidade que mais atendeu é: Oeste");
    }

   fclose(pont_arq18);

  menuorquit();
}
