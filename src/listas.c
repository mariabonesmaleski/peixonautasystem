#include "../include/listas.h"
#include "../include/utils.h"
#include <stdlib.h>
#include <stdio.h>


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

// Criar o dado:
peixe_t criar_novo_peixe()
{
    peixe_t peixe;

    printf("Identificação.............: ");
    scanf("%hhu", &peixe.id);
    getchar();

    printf("Espécie...................: ");
    fgets(peixe.especie, T_STR, stdin);
    retirar_enter(peixe.especie);
    formatar_maiuscula(peixe.especie);

    printf("Quantidade em estoque.....: ");
    scanf("%f", &peixe.qtd_estoque);

    printf("Valor em KG...............: ");
    scanf("%f", &peixe.vlr_unitario);

    return peixe;
}

cliente_t criar_novo_cliente()
{
    cliente_t cliente;

    printf("Identificação.............: ");
    scanf("%hhu", &cliente.id);
    getchar();

    printf("Nome......................: ");
    fgets(cliente.nome, T_STR, stdin);
    retirar_enter(cliente.nome);
    formatar_maiuscula(cliente.nome);

    printf("Telefone..................: ");
    fgets(cliente.telefone, T_STR, stdin);
    retirar_enter(cliente.telefone);

    cliente.status = true; // Ativo

    return cliente;
}

venda_t criar_nova_venda()
{
    venda_t venda;

    return venda;
}

// Criar o nó:
no_peixe_t *criar_novo_no_peixe(peixe_t peixe)
{
    no_peixe_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_peixe_t));

    novo_no->peixe = peixe;
    novo_no->prox = NULL;

    return novo_no;
}

no_cliente_t *criar_novo_no_cliente(cliente_t cliente)
{
    no_cliente_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_cliente_t));

    novo_no->cliente = cliente;
    novo_no->prox = NULL;

    return novo_no;
}

no_venda_t *criar_novo_no_venda(venda_t venda)
{
    no_venda_t *novo_no = NULL;

    novo_no = malloc(sizeof(no_venda_t));

    novo_no->venda = venda;
    novo_no->prox = NULL;

    return novo_no;
}

//Inserir o nó na lista:
void inserir_no_lista_peixe(controle_lista_peixes_t *controle, no_peixe_t *no_peixe)
{
    if(!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = no_peixe;
    }
    else{
        controle->ultimo->prox = no_peixe;
    }
}

void inserir_no_lista_cliente(controle_lista_clientes_t *controle, no_cliente_t *no_cliente)
{
    if(!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = no_cliente;
    }
    else{
        controle->ultimo->prox = no_cliente;
    }
}

void inserir_no_lista_venda(controle_lista_vendas_t *controle, no_venda_t *no_venda)
{
    if(!controle->primeiro && !controle->ultimo){
        controle->primeiro = controle->ultimo = no_venda;
    }
    else{
        controle->ultimo->prox = no_venda;
    }
}
