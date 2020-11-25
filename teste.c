#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char login[30];
    char senha[30];
} pessoa; pessoa p[1];

int main(){

    char login[30];
    char senha[30];

    strcpy(p[0].login, "Gestor"); 
    strcpy(p[0].senha, "njboi");

    printf("\nlogin:");
    scanf("%s", login);

    printf("\nsenha:");
    scanf("%s", senha); 

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)){
        printf("Logado com Sucesso"); 
    }else{
        printf("Login Invalido");
    }
    return 0;
}