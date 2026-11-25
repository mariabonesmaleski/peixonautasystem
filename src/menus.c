#include "../include/menus.h"
#include <stdio.h>

int menu_principal()
{
    int opcao;

    printf("PeixoneutaSystem Versão 00.113b0\n");
    printf("--------------------------------\n");
    printf("1.Estoque.\n");
    printf("2.Clientes.\n");
    printf("3.Vendas.\n");
    printf("0.Sair do Programa.\n");
    printf("--------------------------------\n");
    printf("::: ");
    scanf("%i", &opcao);

    return opcao;
}

int menu_estoque()
{
    int opcao;

    printf("Menu >>> ESTOQUE\n");
    printf("--------------------------------\n");
    printf("1.Incluir item.\n");
    printf("2.Excluir item.\n");
    printf("3.Consultar item por espécie.\n");
    printf("4.Listar itens em estoque.\n");
    printf("5.Listar itens com estoque abaixo de um valor definido.\n");
    printf("0.Retornar ao menu principal.\n");
    printf("--------------------------------\n");
    printf("::: ");
    scanf("%i", &opcao);

    return opcao;
}

int menu_clientes()
{
    int opcao;

    printf("Menu >>> CLIENTES\n");
    printf("--------------------------------\n");
    printf("1.Incluir novo cliente.\n");
    printf("2.Excluir cliente.\n");
    printf("3.Listar clientes cadastrados.\n");
    printf("4.Consultar cliente por nome.\n");
    printf("5.Listar clientes ativos.\n");
    printf("0.Retornar ao menu principal.\n");
    printf("--------------------------------\n");
    printf("::: ");
    scanf("%i", &opcao);

    return opcao;
}

int menu_vendas()
{
    int opcao;

    printf("Menu >>> VENDAS\n");
    printf("--------------------------------\n");
    printf("1.Incluir nova venda.\n");
    printf("2.Listar vendas por cliente.\n");
    printf("3.Listar todas as vendas.\n");
    printf("4.listar vendas por espécie.\n");
    printf("0.Retornar ao menu principal.\n");
    printf("--------------------------------\n");
    printf("::: ");
    scanf("%i", &opcao);

    return opcao;
}