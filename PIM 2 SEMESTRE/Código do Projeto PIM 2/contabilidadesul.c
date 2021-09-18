#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int contabilidadesul(){

    char redirecionamento[200],nomearquivo[100]; //variavel q vai receber o nome do arquivo
    float valor;

 FILE *pont_arq11; //criar ponteiro para arquivo txt
    pont_arq11 = fopen("..\\Sistema de Clinicas UNIP\\contabilidadesul\\valor.txt", "w");

    //recebe o valor da consulta e salva em arquivo txt
    printf("\nValor da consulta (Exemplo: 100,00) na unidade Sul: ");
    scanf("%f",&valor);
    fprintf(pont_arq11,"Valor da consulta na unidade Sul: %f",valor);
    fclose(pont_arq11);

    //renomeia o arquivo txt com valor para nao sobrescrever arquivo anterior
    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\contabilidadesul\\");
    setcolor(244);
    printf("\nConfirmação de dados!");
    printf("\nATENÇÂO: Digite o nome do paciente-valor da consulta e em seguida o formato .txt: ");
    printf("\nExemplo de arquivo: maria-100,00.txt  ");
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);
    rename("..\\Sistema de Clinicas UNIP\\contabilidadesul\\valor.txt",redirecionamento);
    setcolor(242);
}
