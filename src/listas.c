#include "../include/listas.h"
#include <stdlib.h>

void inicializar_lista_peixes(controle_lista_peixes_t *peixes)
{
    peixes->primeiro = NULL;
    peixes->ultimo = NULL;
}

void inicializar_lista_clientes(controle_lista_clientes_t *clientes)
{
    clientes->primeiro = NULL;
    clientes->ultimo = NULL;
}

void inicializar_lista_vendas(controle_lista_vendas_t *vendas)
{
    vendas->primeiro = NULL;
    vendas->ultimo = NULL;
}