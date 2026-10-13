// JVida_DHIR_Controller.cpp
// 13/10/2026
// Daniel Luis de Amorim Mariano Santos, Henrique Campos Rodrigues, Isabella de Souza Fleury, Rafaella Castro Zandona Alves de Lima 

#include "JVida_DHIR_Controller.h"
#include "JVida_DHIR_View.cpp"
#include <stdio.h>

void iniciar() {
    int op;
    int l;
    int c;

    dim = pedirDim();
    limparMapa(); 

    do {
        mostrarMenu();
        op = lerOpcao();
        switch (op) {
            case 1:
            	desmarcarVizinhasMortas();
            	if (mostrarMortos == 1) {
            		marcarVizinhasMortas();
				}
                mostrarMapa();
                break;
            case 2:
                limparMapa();
                break;
            case 3:
    			pedirCoordenadas(&l, &c);
    				if (!coordValida(l, c)) {
        			mostrarCoordInvalida();
    				} else if (celulaViva(l, c)) {
        			if (perguntarExcluir()) {
        		    excluirCelula(l, c);
        			}
    			} else {
       				incluirCelula(l, c);
    			}
    			break;
    		case 4:
    			mostrarMortos = !mostrarMortos;
    			mostrarEstadoMortos(mostrarMortos);
    			break;
            case 0:
                mostrarDespedida();
                break;
            default:
                mostrarOpcaoInvalida();
        }
    } while (op != 0);
}
