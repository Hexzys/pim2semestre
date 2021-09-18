#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>
feedback(){
     char redirecionamento[200];//="..\\Sistema de Clinicas UNIP\\consultas\\";
    char nomearquivo[100]; //variavel q vai receber o nome do arquivo
    char feedback[1500];
    char nome[50];

    FILE *pont_arq5;
    pont_arq5 = fopen("..\\Sistema de Clinicas UNIP\\feedbacks\\arquivo_nome.txt" , "w");
    if(pont_arq5 == NULL)
    {
        printf("erro na abertura do arquivo!");
        return 1;
    }
    else{
        system("cls");

    printf("Nome do Paciente:");
    scanf("%s",&nome);
    printf("Digite o Elogio ou Reclamação do paciente:\n");
    fflush(stdin);
    gets(feedback);
    fprintf(pont_arq5, "Nome do Paciente:%s\n",&nome);
    fprintf(pont_arq5, "\nElogio ou Reclamação:%s",&feedback);

    fclose(pont_arq5);


strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\feedbacks\\");
setcolor(244);
printf("\nATENÇÃO: Digite o nome do arquivo utilizando o nome do paciente (exemplo:jose-ribeiro.txt): ");
setcolor(242);
scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
strcat(redirecionamento,nomearquivo);
rename("..\\Sistema de Clinicas UNIP\\feedbacks\\arquivo_nome.txt",redirecionamento);
    menuorquit();
    }
}
