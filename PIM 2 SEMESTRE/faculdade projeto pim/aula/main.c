#include <stdio.h>
#include <stdlib.h>

int main()
{
    int questao1,questao2,questao3,questao4,questao5,questao6,questao7,questao8,questao9,questao10,nota;

    FILE *pont_arq; //criar ponteiro para arquivo txt
    pont_arq = fopen("prova.txt", "w"); // abrir arquivo com tipo de abertura ''w'' formato de gravação de dados
    if(pont_arq == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {

    printf("Quanto é 5-9?");
    scanf("%d",&questao1);
    if (questao1 = A)
{


        nota++
}
    printf("Quanto é 3-3?");
    scanf("%d",&questao2);
    printf("Quanto é 3-9?");
    scanf("%d",&questao3);
    printf("Quanto é 4-3?");
    scanf("%d",&questao4);
    printf("Quanto é 5-9?");
    scanf("%d",&questao5);
    printf("Quanto é 6-3?");
    scanf("%d",&questao6);
    printf("Quanto é 7-9?");
    scanf("%d",&questao7);
    printf("Quanto é 8-3?");
    scanf("%d",&questao8);
    printf("Quanto é 9-9?");
    scanf("%d",&questao9);
    printf("Quanto é 10-3?");
    scanf("%d",&questao10);


print("%d",&nota);

    return 0;

}
}
