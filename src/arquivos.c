#include "../include/arquivos.h"
#include "../include/conf.h"
#include "../include/listas.h"
#include <stdio.h>
#include <stdlib.h>

// Salvar os dados:
void salvar_dados_peixes(no_peixe_t *peixe)
{
    FILE *fp = NULL;

    fp = fopen(ARQ_PEIXES, "wb");

    if(!fp) return;

    while(peixe){
        fwrite(&peixe->peixe, sizeof(peixe_t), 1, fp);
        peixe = peixe->prox;
    }

    fclose(fp);
}

void salvar_dados_clientes(no_cliente_t *cliente)
{
    FILE *fp = NULL;

    fp = fopen(ARQ_CLIENTES, "wb");

    if(!fp) return;

    while(cliente){
        fwrite(&cliente->cliente, sizeof(cliente_t), 1, fp);
        cliente = cliente->prox;
    }

    fclose(fp);
}

void salvar_dados_vendas(no_venda_t *venda)
{
    FILE *fp = NULL;

    fp = fopen(ARQ_VENDAS, "wb");

    if(!fp) return;

    while(venda){
        fwrite(&venda->venda, sizeof(venda_t), 1, fp);
        venda = venda->prox;
    }

    fclose(fp);
}

// Ler dados:
void ler_dados_peixes(controle_lista_peixes_t *controle)
{
    FILE *fp = NULL;

    fp = fopen(ARQ_PEIXES, "rb");

    if(!fp) return;

    peixe_t novo_peixe;
    no_peixe_t *novo_no_peixe = NULL;

    // Percorrer o arquivo binário
    while(!feof(fp)){
        fread(&novo_peixe, sizeof(peixe_t), 1, fp);
        if(!feof(fp)){
            novo_no_peixe = criar_novo_no_peixe(novo_peixe);
            inserir_no_lista_peixe(controle, novo_no_peixe);
        }
    }

    fclose(fp);
}

void ler_dados_clientes(controle_lista_clientes_t *controle)
{
    FILE *fp = NULL;

    fp = fopen(ARQ_CLIENTES, "rb");

    if(!fp) return;

    cliente_t novo_cliente;
    no_cliente_t *novo_no_cliente = NULL;

    // Percorrer o arquivo binário
    while(!feof(fp)){
        fread(&novo_cliente, sizeof(cliente_t), 1, fp);
        if(!feof(fp)){
            novo_no_cliente = criar_novo_no_cliente(novo_cliente);
            inserir_no_lista_cliente(controle, novo_no_cliente);
        }
    }

    fclose(fp);
}

void ler_dados_vendas(controle_lista_vendas_t *controle)
{
    FILE *fp = NULL;

    fp = fopen(ARQ_VENDAS, "rb");

    if(!fp) return;

    venda_t novo_venda;
    no_venda_t *novo_no_venda = NULL;

    // Percorrer o arquivo binário
    while(!feof(fp)){
        fread(&novo_venda, sizeof(venda_t), 1, fp);
        if(!feof(fp)){
            novo_no_venda = criar_novo_no_venda(novo_venda);
            inserir_no_lista_venda(controle, novo_no_venda);
        }
    }

    fclose(fp);
}