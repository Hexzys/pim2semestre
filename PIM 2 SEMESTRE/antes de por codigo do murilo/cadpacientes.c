#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

int cadpacientes(){

system("cls");
//sistema de cadastro de pacientes com redirecionamento de pasta
    char rede[100];
  //  int year,dia,mes,ddd,tel,at;
    printf("Digite a unidade da rede sul, leste ou oeste (minusculo): ");
    scanf("%s",&rede);

//Estrutura condicional irá pedir a unidade da rede para redirecionar a pasta de cada unidade
if (strcmp(rede, "sul") == 0){
    pacientessul();
}
else if (strcmp(rede, "leste") == 0){
    pacientesleste();
}
else if (strcmp(rede, "oeste") == 0){
     pacientesoeste();
}

menuorquit();
    }


