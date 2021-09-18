#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <dirent.h>

verpacientes(){ // função de ver os pacientes

system("cls");

char nomearquivo[100],redirecionamento[200],conteudo[2000],rede[20];

FILE *pont_arq16; //criar ponteiro para arquivo txt
    pont_arq16 = fopen("..\\Sistema de Clinicas UNIP\\relatorios\\total_pacientes-sul.txt","w");

FILE *pont_arq18; //criar ponteiro para arquivo txt
    pont_arq18 = fopen("..\\Sistema de Clinicas UNIP\\relatorios\\total_pacientes-leste.txt","w");

FILE *pont_arq20; //criar ponteiro para arquivo txt
    pont_arq20 = fopen("..\\Sistema de Clinicas UNIP\\relatorios\\total_pacientes-oeste.txt","w");

  printf("Digite a unidade da rede sul, leste ou oeste (minusculo): ");
  scanf("%s",&rede);
  fprintf(pont_arq16, "\n Unidade da Rede: %s", rede);

//o comando DIR imprime na tela quantos arquivos existem no diretorio da pasta

//**PASTA SUL**
if (strcmp(rede, "sul") == 0){
  DIR *dir;
    struct dirent *sul;
    dir = opendir("..\\Sistema de Clinicas UNIP\\pacientessul");
    while ((sul = readdir(dir))!=NULL){
        printf ("\n Pacientes da unidade Sul registrados no sistema: %s\n ", sul->d_name);
        fprintf(pont_arq16, "\n Pacientes da unidade Sul registrados no sistema: no sistema: %s\n ", sul->d_name); }
   closedir(dir);

   //Depois de consultar os arquivos da pasta os comandos abaixo redirecionam e exibem o arquivo individual no console
    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\pacientessul\\");
    printf("\n\n Digite o nome do arquivo do paciente que você deseja visualizar individualmente: ");
    printf("\n\n Exemplo: nome-sul.txt ");
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);

    fclose(pont_arq16);

FILE *pont_arq17; //criar ponteiro para arquivo txt
    pont_arq17 = fopen(redirecionamento, "r");
     if(pont_arq17 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");

    while(fgets(conteudo,2000,pont_arq17)!= NULL)
        printf("%s",conteudo);

fclose(pont_arq17); }
menuorquit();
}

//**PASTA LESTE**
else if (strcmp(rede, "leste") == 0){
  DIR *dir;
    struct dirent *leste;
    dir = opendir("..\\Sistema de Clinicas UNIP\\pacientesleste");
    while ((leste = readdir(dir))!=NULL){
        printf ("\n Pacientes da unidade Leste registrados no sistema: %s\n ", leste->d_name);
        fprintf(pont_arq18, "\n Pacientes da unidade Leste registrados no sistema: %s\n ", leste->d_name); }
   closedir(dir);

   //Depois de consultar os arquivos da pasta os comandos abaixo redirecionam e abrem o arquivo individual no console
    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\pacientesleste\\");
    printf("\n\n Digite o nome do arquivo do paciente que você deseja visualizar individualmente: ");
    printf("\n\n Exemplo: nome-leste.txt ");
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);
    printf("\n\n Exemplo: nome-leste.txt ");

    fclose(pont_arq18);

FILE *pont_arq19; //criar ponteiro para arquivo txt
    pont_arq19 = fopen(redirecionamento, "r");
     if(pont_arq19 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");

    while(fgets(conteudo,2000,pont_arq19)!= NULL)
        printf("%s",conteudo);

fclose(pont_arq19); }
menuorquit();
}

//**PASTA OESTE**
else if (strcmp(rede, "oeste") == 0){
  DIR *dir;
    struct dirent *oeste;
    dir = opendir("..\\Sistema de Clinicas UNIP\\pacientesoeste");
    while ((oeste = readdir(dir))!=NULL){
        printf ("\n Pacientes da unidade Oeste registrados no sistema: %s\n", oeste->d_name);
        fprintf(pont_arq20, "\n Pacientes da unidade Oeste registrados no sistema: %s\n", oeste->d_name); }
   closedir(dir);

   //Depois de consultar os arquivos da pasta os comandos abaixo redirecionam e abrem o arquivo individual no console
    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\pacientesoeste\\");
    printf("\n\n Digite o nome do arquivo do paciente que você deseja visualizar individualmente: ");
    printf("\n\n Exemplo: nome-oeste.txt ");
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);

    fclose(pont_arq20);

FILE *pont_arq21; //criar ponteiro para arquivo txt
    pont_arq21 = fopen(redirecionamento, "r");
     if(pont_arq21 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");

    while(fgets(conteudo,2000,pont_arq21)!= NULL)
        printf("%s",conteudo);

fclose(pont_arq21); }
menuorquit();
}
}
