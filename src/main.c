#include "../include/menus.h"
#include "../include/listas.h"
#include "../include/utils.h"
#include "../include/arquivos.h"
#include "../include/relatorios.h"

int main()
{
    controle_lista_peixes_t lista_peixes;
    controle_lista_clientes_t lista_clientes;
    controle_lista_vendas_t lista_vendas;
    
    //Inicializar as listas
    inicializar_lista_peixes(&lista_peixes);
    inicializar_lista_clientes(&lista_clientes);
    inicializar_lista_vendas(&lista_vendas);

    //Menus
    int opc_menu_principal, opc_menu_clientes, opc_menu_peixes, opc_menu_vendas;

    limpar_tela ();

    // Ler dados dos arquivos binários:
    ler_dados_peixes(&lista_peixes);
    ler_dados_clientes(&lista_clientes);
    // ler_dados_vendas(&lista_vendas)
    
    do {
        opc_menu_principal = menu_principal();

        switch(opc_menu_principal){
            case 1: do {
                        opc_menu_peixes = menu_estoque();

                        switch(opc_menu_peixes){
                            case 1: inserir_no_lista_peixe(&lista_peixes, criar_novo_no_peixe(criar_novo_peixe()));
                                    break;

                            case 2: 
                                    break;
                            case 3: 
                                    break;

                            case 4: listar_peixes(lista_peixes.primeiro);
                                    break;
                            case 5: 
                                    break;
                        }

                    } while (opc_menu_peixes != 0);
                    break;

            case 2: do {
                        opc_menu_clientes = menu_clientes();

                        switch(opc_menu_clientes){
                            case 1: inserir_no_lista_cliente(&lista_clientes, criar_novo_no_cliente(criar_novo_cliente()));
                                    break;

                            case 2: 
                                    break;

                            case 3: listar_clientes(lista_clientes.primeiro);
                                    break;
                            case 4: 
                                    break;
                            case 5: 
                                    break;
                        }
                        
                    } while (opc_menu_clientes != 0);
                    break;

            case 3: do {
                        opc_menu_vendas = menu_vendas();

                        switch(opc_menu_vendas){
                            case 1: break;
                            case 2: break;
                            case 3: break;
                            case 4: break;
                        }
                        
                    } while (opc_menu_vendas != 0);
                    break;
        }

    } while(opc_menu_principal != 0);

    // Salvar dados:
    salvar_dados_peixes(lista_peixes.primeiro);
    salvar_dados_clientes(lista_clientes.primeiro);
    // salvar_dados_vendas(lista_vendas.primeiro);

    return 0;
}