#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

int agendconsulta(){

char redirecionamento[200];//="..\\Sistema de Clinicas UNIP\\consultas\\";
char nomearquivo[100]; //variavel q vai receber o nome do arquivo
char nome[50],especialidade[50],medico[50],horario[50],rede[50],data[50],redesul[50],redeleste[50],redeoeste[50];
char preco[100];

 FILE *pont_arq2; //criar ponteiro para arquivo txt
    pont_arq2 = fopen("..\\Sistema de Clinicas UNIP\\consultas\\arquivo_nome.txt","w"); // abrir arquivo com tipo de abertura ''w'' formato de gravação de dados
    if(pont_arq2 == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
      system("cls");


    printf("Digite a unidade da rede sul, leste ou oeste (minusculo): ");
    scanf("%s",&rede);
    fprintf(pont_arq2,"Unidade da rede:%s ",&rede);
    printf("\nNome e sobrenome do paciente: ");
    fflush(stdin);
    gets(nome);
    fprintf(pont_arq2, "\nNome e sobrenome do paciente:%s",&nome);
    printf("\nEspecialidade (Ex:Cardiologista): ");
    scanf("%s",especialidade);
    fprintf(pont_arq2, "\nEspecialidade:%s",&especialidade);
    printf("\nData da Consulta: ");
    fflush(stdin);
    gets(data);
    fprintf(pont_arq2,"Data: %s ",data);
    printf("\nHorário da consulta: ");
    fflush(stdin);
    gets(horario);
    fprintf(pont_arq2, "\nHorário:%s",&horario);
    printf("\nMédico: ");
    scanf("%s",medico);
    fprintf(pont_arq2, "\nMédico:%s",&medico);

    fclose(pont_arq2);


//Comando irá renomear cada txt de consulta com um ID.txt
strcpy(redirecionamento,"..\\Sistema de Clinicas UNIP\\consultas\\");
printf("\nATENÇÂO: Digite o primeiro nome do paciente-unidade da rede e em seguida o formato .txt: ");
printf("\nExemplo de arquivo: vinicius-leste.txt  ");
scanf("%s",&nomearquivo); //vai mover oque for digitado para o nomearquivo e renomear o txt
strcat(redirecionamento,nomearquivo);
rename("..\\Sistema de Clinicas UNIP\\consultas\\arquivo_nome.txt",redirecionamento);
printf("\n\n Consulta Agendada com sucesso! Agora cadastre o valor: ");


}



//Estrutura condicional irá pedir o valor para redirecionar a contabilidade de cada unidade
if (strcmp(rede, "sul") == 0){
    contabilidadesul();
}
else if (strcmp(rede, "leste") == 0){
    contabilidadeleste();
}
else if (strcmp(rede, "oeste") == 0){
     contabilidadeoeste();
}

menuorquit();
}
