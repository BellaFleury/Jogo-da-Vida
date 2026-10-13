// JVida_DHIR_Model.cpp
// 13/10/2026
// Daniel Luis de Amorim Mariano Santos, Henrique Campos Rodrigues, Isabella de Souza Fleury, Rafaella Castro Zandona Alves de Lima 

#include "JVida_DHIR_Model.h"

char Matriz[60][60];
int dim;
int mostrarMortos;

int dimValida(int d) {
    if (d >= 10 && d <= 60) {
        return 1;
    }
    return 0;
}

void limparMapa() {
    int l, c;
    for (l = 0; l < dim; l++) {
        for (c = 0; c < dim; c++) {
            Matriz[l][c] = '.';
        }
    }
}

int coordValida(int l, int c) {
    if (l >= 0 && l <= dim - 1 && c >= 0 && c <= dim - 1) {
        return 1;
    }
    return 0;
}

int celulaViva(int l, int c) {
    if (Matriz[l][c] == 'O') {
        return 1;
    }
    return 0;
}

void incluirCelula(int l, int c) {
    Matriz[l][c] = 'O';
}

void excluirCelula(int l, int c) {
    Matriz[l][c] = '.';
}

void marcarVizinhasMortas() {
    int l, c, i, j;
    for (l = 0; l < dim; l++) {
        for (c = 0; c < dim; c++) {
            if (celulaViva(l, c)) {
                for (i = l - 1; i <= l + 1; i++) {
                    for (j = c - 1; j <= c + 1; j++) {
                        if (coordValida(i, j) && Matriz[i][j] == '.') {
                            Matriz[i][j] = '+'; //marcar as vizinhas mortas com + 
                        }
                    }
                }
            }
        }
    }
}

void desmarcarVizinhasMortas() {
	int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
        	if (Matriz[i][j] == '+'){
            Matriz[i][j] = '.';
        	}
        }
    }
}
