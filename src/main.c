#include "../include/menus.h"
#include "../include/listas.h"

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

    do {
        opc_menu_principal = menu_principal();

        switch(opc_menu_principal){
            case 1: do {
                        opc_menu_peixes = menu_estoque();

                        switch(opc_menu_peixes){
                            case 1: break;
                            case 2: break;
                            case 3: break;
                            case 4: break;
                            case 5: break;
                        }

                    } while (opc_menu_peixes != 0);
                    break;

            case 2: do {
                        opc_menu_clientes = menu_clientes();

                        switch(opc_menu_clientes){
                            case 1: break;
                            case 2: break;
                            case 3: break;
                            case 4: break;
                            case 5: break;
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


    return 0;
}