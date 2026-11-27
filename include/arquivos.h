#ifndef ARQUIVOS_H
#define ARQUIVOS_H

#include "tipos.h"

// Salvar os dados:
void salvar_dados_peixes(no_peixe_t *peixe);
void salvar_dados_clientes(no_cliente_t *cliente);
void salvar_dados_vendas(no_venda_t *venda);

// Ler dados:
void ler_dados_peixes(controle_lista_peixes_t *controle);
void ler_dados_clientes(controle_lista_clientes_t *controle);
void ler_dados_vendas(controle_lista_vendas_t *controle);

#endif