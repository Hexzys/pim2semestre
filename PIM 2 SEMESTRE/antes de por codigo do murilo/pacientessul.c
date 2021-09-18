#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

int pacientessul(){

    char redirecionamento[200],nomearquivo[100]; //variavel q vai receber o nome do arquivo

 FILE *pont_arq14; //criar ponteiro para arquivo txt
    pont_arq14 = fopen("..\\Sistema de Clinicas UNIP\\pacientessul\\arquivo_nome.txt", "w");

//sistema de cadastro de pacientes
    char nome[100],sob[100],sexo[100],cid[100],est[100],al[100],end[100],year[100],dia[100],mes[100],ddd[100],tel[100],rede[100];
  //a utilização do gets é para conseguir utilizar caracteres especiais e o fflush limpa o buffer

    printf("\n\t    Dados pessoais \n");
    printf("Primeiro nome: ");
    fflush(stdin);
    gets(nome);
    fprintf(pont_arq14, "Nome:%s",&nome); //prints do ponteiro
    printf("Sobrenome: ");
    scanf("%s",&sob);
    fprintf(pont_arq14, "\nSobrenome:%s",&sob);
    printf("Sexo: ");
    scanf("%s",&sexo);
    fprintf(pont_arq14, "\nSexo:%s",&sexo);
    printf("\nData de Nascimento");
    printf("\nDia:");
    scanf("%s",&dia);
    fprintf(pont_arq14, "\nDia:%s",&dia);
    printf("Mes:");
    scanf("%s",&mes);
    fprintf(pont_arq14, "\nMes:%s",&mes);
    printf("Ano:");
    scanf("%s",&year);
    fprintf(pont_arq14, "\nAno:%s",&year);

    printf("\t Contato e informacoes adicionais\n\n");
    printf("Telefone: ");
    scanf("%s",&tel);
    fprintf(pont_arq14, "\nTelefone:%s",&tel);
    printf("Estado(ex: SP): ");
    fflush(stdin);
    gets(est);
    fprintf(pont_arq14, "\nEstado:%s",&est);
    printf("Cidade: ");
    fflush(stdin);
    gets(cid);
    fprintf(pont_arq14, "\nCidade:%s",&cid);


    fclose(pont_arq14);

    //renomeia o arquivo txt com valor para nao sobrescrever arquivo anterior
    strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\pacientessul\\");
    setcolor(244);
    printf("\nATENÇÂO: Digite o nome do paciente-unidade da rede e em seguida o formato .txt: ");
    printf("\nExemplo de arquivo: joao-sul.txt  ");
    scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
    strcat(redirecionamento,nomearquivo);
    rename("..\\Sistema de Clinicas UNIP\\pacientessul\\arquivo_nome.txt",redirecionamento);
    setcolor(242);
}
