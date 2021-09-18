#include <stdio.h>
#include <stdlib.h>
#include <string.h>



    typedef struct{
    char login[30];
    char senha [30];
} pessoa; pessoa p[1];

int main(){
    char login[30];
    char senha[30];
    strcpy(p[0].login, "admin");
    strcpy(p[0].senha, "admin");

    printf("\n\t\t\t\t\tBem vindo a Clinica ADS");

    printf("\n\tDigite o Nome de Usuario:");
    scanf("%s",login);
    printf("\n\t\tDigite sua senha:");
    scanf("%s", senha);
//((strcmp(login,p[0].login)==0)
    if (strcmp(senha,p[0].senha)==0)){
            system("cls");
            printf("\nUsuario Logado");
            //colocar menu aqui
    }else{
        system("cls");
        printf("\nlogin e ou senha incorretos");
    }

    return 0;
}
