#ifndef LISTAS_H
#define LISTAS_H

#include "tipos.h"

void inicializar_lista_peixes(controle_lista_peixes_t *peixes);
void inicializar_lista_clientes(controle_lista_clientes_t *clientes);
void inicializar_lista_vendas(controle_lista_vendas_t *vendas);

// Criar o dado:
peixe_t criar_novo_peixe();
cliente_t criar_novo_cliente();
venda_t criar_nova_venda();

// Criar o nó:
no_peixe_t *criar_novo_no_peixe(peixe_t peixe);
no_cliente_t *criar_novo_no_cliente(cliente_t cliente);
no_venda_t *criar_novo_no_venda(venda_t venda);

//Inserir o nó na lista:
void inserir_no_lista_peixe(controle_lista_peixes_t *controle, no_peixe_t *no_peixe);
void inserir_no_lista_cliente(controle_lista_clientes_t *controle, no_cliente_t *no_cliente);
void inserir_no_lista_venda(controle_lista_vendas_t *controle, no_venda_t *no_venda);

#endif