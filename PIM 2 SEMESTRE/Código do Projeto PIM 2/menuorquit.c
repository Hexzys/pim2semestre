#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

menuorquit(){
    int menu;
printf("\nDigite 1 para voltar ao Menu e/ou 0 para encerrar sessão:");
scanf("%d",&menu);
if (menu == 1){
    funcmenu();
}else{
    exit(0);
    }
}
