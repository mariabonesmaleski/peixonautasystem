#ifndef TIPOS_H
#define TIPOS_H

#include <stdbool.h>
#include <stdint.h>

#define T_STR 100

typedef char string[T_STR];

//Peixe
typedef struct peixe{
    uint8_t id;
    string especie;
    float qtd_estoque;  //kilogramas
    float vlr_unitario; //kilogramas
} peixe_t;

//cliente
typedef struct cliente{
    uint8_t id;
    string nome;
    string telefone;
    bool status;
} cliente_t;

//vendas
typedef struct venda{
    uint8_t id;
    uint8_t id_cliente;
    uint8_t id_peixe;
    float quantidade;
    float custo;
} venda_t;

//Nó peixe
typedef struct no_peixe{
    peixe_t peixe;
    struct no_peixe *prox;
} no_peixe_t;

//Nó cliente
typedef struct no_cliente{
    cliente_t cliente;
    struct no_cliente *prox;
} no_cliente_t;

//Nó venda

typedef struct no_venda{
    venda_t venda;
    struct no_venda *prox;
} no_venda_t;

//Controle lista peixes
typedef struct controle_lista_peixes{
    no_peixe_t *primeiro;
    no_peixe_t *ultimo;
} controle_lista_peixes_t;

//Controle lista clientes
typedef struct controle_lista_clientes{
    no_cliente_t *primeiro;
    no_cliente_t *ultimo;
} controle_lista_clientes_t;

//Controle lista vendas
typedef struct controle_lista_vendas{
    no_venda_t *primeiro;
    no_venda_t *ultimo;
} controle_lista_vendas_t;

#endif