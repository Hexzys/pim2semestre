/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>

contadorconsulta(){ //o objetivo dessa função é pegar um numero do bloco de notas ''ID'' e aumentar um toda vez que alguem for cadastrado, para apresentar um id diferente.
    int numero;


    FILE *file;
    file = fopen("contadorconsulta.txt","r");
       if(file == NULL) //teste do arquivo
       {
           printf("erro na abertura do arquivo!");
           return 1;
       }
       else
        {
     system("cls");
    fscanf(file,"%d",&numero);



fclose(file);
    file = fopen("contadorconsulta.txt","w");
    numero = numero + 1;
    fprintf(file,"%d",numero);
    setcolor(244);
    printf("ATENÇÂO: O ID DA SUA CONSULTA É:%d",numero);
    printf("\nATENÇÂO: Digite o seu ID e em seguida o formato .txt");
    printf("\nExemplo de arquivo: 1.txt");
    setcolor(242);
        }
}

*/
