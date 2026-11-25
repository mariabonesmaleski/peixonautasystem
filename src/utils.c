#include "../include/utils.h"
#include "../include/conf.h"
#include <string.h>
#include <ctype.h>

void limpar_tela()
{
    system("clear");
}

void formatar_maiuscula(char *str)
{
    for(int i = 0; i < strlen(str); i++){
        *(str+i) = toupper(*(str+i));
        //str[i] = toupper(str[i]);
    }
}

void retirar_enter(char *str)
{
    *(str+strlen(str)-1) = '\0';
    //str[strlen(str)-1] = '\0';
}

char *mostrar_status(cliente_t cliente)
{
    if (cliente.status == true){
        return STATUS_ATIVO;
    }
    return STATUS_INATIVO;
}