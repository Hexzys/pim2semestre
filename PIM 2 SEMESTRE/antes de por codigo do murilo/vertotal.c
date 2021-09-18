#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

int valordia_sul, somadia_sul; valordia_leste, somadia_leste; valordia_oeste, somadia_oeste;//variaveis globais diarias
int valormensal_sul[30], cont_sul, somames_sul=0,somatotal_sul; //variaveis globais mensais
int valormensal_leste[30], cont_leste, somames_leste=0,somatotal_leste;
int valormensal_oeste[30], cont_oeste, somames_oeste=0,somatotal_oeste;

int vertotal(){

system("cls");
char rede[50],data[10];
int menu;

FILE *pont_arq10; //criar ponteiro para arquivo txt
    pont_arq10 = fopen("..\\Sistema de Clinicas UNIP\\relatorios\\total_dia_mes.txt" ,"w");

  printf("Digite a data: ");
  scanf("%s",&data);
  fprintf(pont_arq10, "\n Data: %s", data);

  printf("Digite a unidade da rede sul, leste ou oeste (minusculo): ");
  scanf("%s",&rede);
  fprintf(pont_arq10, "\n Unidade da Rede: %s", rede);

//o comando DIR imprime na tela quantos arquivos existem no diretorio da pasta SUL
if (strcmp(rede, "sul") == 0){
  DIR *dir;
    struct dirent *sul;
    dir = opendir("..\\Sistema de Clinicas UNIP\\contabilidade\\consultassul");
    while ((sul = readdir(dir))!=NULL){
        printf ("\n Valores registrados da unidade Sul no sistema: %s\n", sul->d_name);
        fprintf(pont_arq10, "\n Valores registrados da unidade Sul no sistema: %s\n", sul->d_name); }
   closedir(dir);

   //Soma diária em loop infinito para adicionar todas consultas do dia
   //Mas quando o usuário digita -1 é finalizado
    setcolor(244);
    printf("\n ATENÇAO: Para finalizar a soma digite -1");
    setcolor(242);
    while(valordia_sul>-1){
    printf("\n Digite um valor de consulta: ");
    scanf("%d",&valordia_sul);
    if(valordia_sul>=0){ somadia_sul=somadia_sul+valordia_sul;
    printf("Somando = %d\n",somadia_sul);
    }
    else{printf("\nTOTAL FINALIZADO!");}
    }
    printf("\nTotal faturado no dia: %d",somadia_sul);
    fprintf(pont_arq10, "\nTotal faturado no dia: %d",somadia_sul);

    printf("\n\n Para relatorio mensal digite o restante do total de 30 dias: \n");
    //loop para receber os valores digitados pelo usuario, a soma diaria anterior também será contada
    for (cont_sul=1; cont_sul<30; cont_sul++){
        printf ("Digite um valor [%d]:", cont_sul);
        scanf ("%d", &valormensal_sul[cont_sul]);
    }
    //Somando os valores do vetor
    for (cont_sul=1;cont_sul<30;cont_sul++) {
    somames_sul = somames_sul + valormensal_sul[cont_sul];
    somatotal_sul = somames_sul + somadia_sul;
    }
    printf("\nTotal diário de %d + faturado no mês = %d",somadia_sul,somatotal_sul);
    fprintf(pont_arq10, "\nTotal diário de %d + faturado no mês = %d",somadia_sul,somatotal_sul);

  fclose(pont_arq10);
}


else if (strcmp(rede, "leste") == 0){
     DIR *dir;
    struct dirent *leste;
    dir = opendir("..\\Sistema de Clinicas UNIP\\contabilidade\\consultasleste");
    while ((leste = readdir(dir))!=NULL){
        printf ("\n Valores registrados da unidade Leste no sistema: %s\n", leste->d_name);
        fprintf(pont_arq10, "\n Valores registrados da unidade Leste no sistema: %s\n", leste->d_name); }
   closedir(dir);


    setcolor(244);
    printf("\n ATENÇAO: Para finalizar a soma digite -1");
    setcolor(242);
    while(valordia_leste>-1){
    printf("\n Digite um valor de consulta: ");
    scanf("%d",&valordia_leste);
    if(valordia_leste>=0){ somadia_leste=somadia_leste+valordia_leste;
    printf("Somando = %d\n",somadia_leste);
    }
    else{printf("\nTOTAL FINALIZADO!");}
    }
    printf("\nTotal faturado no dia: %d",somadia_leste);
    fprintf(pont_arq10, "\nTotal faturado no dia: %d",somadia_leste);

    printf("\n\n Para relatorio mensal digite o restante do total de 30 dias: \n");
    //loop para receber os valores digitados pelo usuario, a soma diaria anterior também será contada
    for (cont_leste=1; cont_leste<30; cont_leste++){
        printf ("Digite um valor [%d]:", cont_leste);
        scanf ("%d", &valormensal_leste[cont_leste]);
    }
    //Somando os valores do vetor
    for (cont_leste=1;cont_leste<30;cont_leste++) {
    somames_leste = somames_leste + valormensal_leste[cont_leste];
    somatotal_leste = somames_leste + somadia_leste;
    }
    printf("\nTotal diário de %d + faturado no mês = %d",somadia_leste,somatotal_leste);
    fprintf(pont_arq10, "\nTotal diário de %d + faturado no mês = %d",somadia_leste,somatotal_leste);

  fclose(pont_arq10);
}


else if (strcmp(rede, "oeste") == 0){
     DIR *dir;
    struct dirent *oeste;
    dir = opendir("..\\Sistema de Clinicas UNIP\\contabilidade\\consultasoeste");
    while ((oeste = readdir(dir)) != NULL){
        printf ("\n Valores registrados da unidade Oeste no sistema: %s\n", oeste->d_name);
        fprintf(pont_arq10, "\n Valores registrados da unidade Oeste no sistema: %s\n", oeste->d_name); }
   closedir(dir);

    setcolor(244);
    printf("\n ATENÇAO: Para finalizar a soma digite -1");
    setcolor(242);
    while(valordia_oeste>-1){
    printf("\n Digite um valor de consulta: ");
    scanf("%d",&valordia_oeste);
    if(valordia_oeste>=0){ somadia_oeste=somadia_oeste+valordia_oeste;
    printf("Somando = %d\n",somadia_oeste);
    }
    else{printf("\nTOTAL FINALIZADO!");}
    }
    printf("\nTotal faturado no dia: %d",somadia_oeste);
    fprintf(pont_arq10, "\nTotal faturado no dia: %d",somadia_oeste);

    printf("\n\n Para relatorio mensal digite o restante do total de 30 dias: \n");
    //loop para receber os valores digitados pelo usuario, a soma diaria anterior também será contada
    for (cont_oeste=1; cont_oeste<30; cont_oeste++){
        printf ("Digite um valor [%d]:", cont_oeste);
        scanf ("%d", &valormensal_oeste[cont_oeste]);
    }
    //Somando os valores do vetor
    for (cont_oeste=1;cont_oeste<30;cont_oeste++) {
    somames_oeste = somames_oeste + valormensal_oeste[cont_oeste];
    somatotal_oeste = somames_oeste + somadia_oeste;
    }
    printf("\nTotal diário de %d + faturado no mês = %d",somadia_oeste,somatotal_oeste);
    fprintf(pont_arq10, "\nTotal diário de %d + faturado no mês = %d",somadia_oeste,somatotal_oeste);

  fclose(pont_arq10);
}

printf("\n\n Digite 1 para o relatório diário/mensal de toda rede, 2 para voltar ao Menu e/ou 0 para encerrar sessão:");
scanf("%d",&menu);
if (menu == 1){
    vertotalrede();
}
else if (menu == 2){
    funcmenu();
}
else{
    exit(0);
}
}
