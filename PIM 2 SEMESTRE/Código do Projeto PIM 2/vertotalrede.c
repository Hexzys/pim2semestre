#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

int somadia_sul,somatotal_sul,somadia_leste,somatotal_leste,somadia_oeste,somatotal_oeste;
int somadia_rede,somatotal_rede;

int vertotalrede(){ //fun��o para ver o total de cada rede


system("cls");//apaga a tela anterior quando nova fun�ao � chamada

setcolor(244);
    printf("\n ATEN�AO: Esta tela s� funciona se a tela 11 for totalmente preenchida por cada unidade antes");
    setcolor(242);

FILE *pont_arq19; //criar ponteiro para arquivo txt
    pont_arq19 = fopen("..\\Sistema de Clinicas UNIP\\relatorios\\total_rede.txt" ,"w");

printf("\n\nTotal faturado di�rio da unidade Sul �: %d",somadia_sul);
    fprintf(pont_arq19, "\n\nTotal faturado di�rio da unidade Sul �: %d",somadia_sul);

printf("\nTotal faturado di�rio da unidade leste �: %d",somadia_leste);
    fprintf(pont_arq19, "\nTotal faturado di�rio da unidade leste �: %d",somadia_leste);

printf("\nTotal faturado di�rio da unidade oeste �: %d",somadia_oeste);
    fprintf(pont_arq19, "\nTotal faturado di�rio da unidade oeste �: %d",somadia_oeste);

somadia_rede = somadia_sul + somadia_leste + somadia_oeste;
printf("\n\n Total faturado DI�RIO das 3 unidades: %d",somadia_rede);
    fprintf(pont_arq19, "\nTotal faturado DI�RIO das 3 unidades: %d",somadia_rede);


printf("\n\nTotal faturado mensal da unidade Sul �: %d",somatotal_sul);
    fprintf(pont_arq19, "\n\nTotal faturado mensal da unidade Sul �: %d",somatotal_sul);

printf("\nTotal faturado mensal da unidade leste �: %d",somatotal_leste);
    fprintf(pont_arq19, "\nTotal faturado mensal da unidade leste �: %d",somatotal_leste);

printf("\nTotal faturado mensal da unidade oeste �: %d",somatotal_oeste);
    fprintf(pont_arq19, "\nTotal faturado mensal da unidade oeste �: %d",somatotal_oeste);

somatotal_rede = somatotal_sul + somatotal_leste + somatotal_oeste;
printf("\n\nTotal faturado MENSAL das 3 unidades: %d",somatotal_rede);
    fprintf(pont_arq19, "\n\nTotal faturado MENSAL das 3 unidades: %d",somatotal_rede);

 fclose(pont_arq19);

     menuorquit();
}
