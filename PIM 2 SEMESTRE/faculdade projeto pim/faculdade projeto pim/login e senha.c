//https://www.youtube.com/channel/UCK4Gdl_12OM0NGoc9KUO3OA?view_as=subscriber
#include<stdio.h>
#include<stdlib.h>
#include<string.h> //Biblioteca para usar a fun�ao strcmp
#include<windows.h>
#include<conio.h>

main(){

       char c;
       char login[20];
       char senha[20];
       int a=10;
       int i=0;
       int verifica_senha=0;
      while(verifica_senha==0){
       printf("\n\t\tClinica ADS\n\n login: ");
       //fflush(stdin);  //Limpando o buffer do teclado
       gets(login);
       printf("\n senha: ");
       while((c=getch())!=13){ //13 � o valor de ENTER na tabela ASCII
           senha[i]=c;
           i++;
           printf("*");      //imprime o * Anterisco
           }
          senha[i]='\0';
          i=0;
       system("cls");
       a= strcmp(senha,"admin"); //
       if(a==0)printf{("SENHA CORRETA");system("color 0a");verifica_senha=1;Beep(1500,2000);}
       //levar para o menu


        else printf{("%s SENHA ERRADA\n",senha);system("color 0c");Beep(1200,200);}
       printf("\n");

       }
       system("pause");
       return 0;
}
