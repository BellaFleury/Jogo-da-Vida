// JVida_DHIR_View.cpp
// 13/10/2026
// Daniel Luis de Amorim Mariano Santos, Henrique Campos Rodrigues, Isabella de Souza Fleury, Rafaella Castro Zandona Alves de Lima 

#include <stdio.h>
#include "JVida_DHIR_View.h"

void mostrarMapa() {
    int l, c;

    printf("    ");
    for (c = 0; c < dim; c++) {
        printf("%02d ", c); //escreve o numero com 2 digitos
    }
    printf("\n");

    for (l = 0; l < dim; l++) {
        printf("%02d  ", l);
        for (c = 0; c < dim; c++) {
            printf("%c  ", Matriz[l][c]); 
        }
        printf("\n");
    }
}

int pedirDim() {
    int d;
    do {
        printf("Digite a dimensão do mapa (de 10 a 60): ");
        scanf("%d", &d);
        if (!dimValida(d)) {
            printf("Valor invalido!\n");
        }
    } while (d < 10 || d > 60);
    return d;
}

void mostrarMenu() {
    printf("\n  J O G O   D A   V I D A\n");
    printf("===========================\n");
    printf("1 - Apresentar o Mapa\n");
    printf("2 - Limpar mapa\n");
    printf("3 - Incluir/excluir celulas vivas\n");
    printf("4 - Mostrar/Esconder os mortos-vizinhos\n");
    printf("0 - Sair\n");
    printf("Opcao selecionada: ");
}

int lerOpcao() {
    int op;
    scanf("%d", &op);
    return op;
}

void pedirCoordenadas(int *l, int *c) { //* indica ponteiro, onde guarda o "endereco" da variavel.
    printf("Linha: ");
    scanf("%d", l);
    printf("Coluna: ");
    scanf("%d", c);
}

int perguntarExcluir() {
    char e;
    printf("Ja existe uma celula viva aqui. Excluir? (s/n): ");
    scanf(" %c", &e);
    if (e == 's') {
        return 1;
    }
    return 0;
}

void mostrarCoordInvalida(){
	printf("Coordenada invalida!\n"); //case 3
}

void mostrarDespedida(){
	printf("Ate logo!\n"); //case 0
}

void mostrarOpcaoInvalida(){
	printf("Opcao invalida!\n"); //default
}

void mostrarEstadoMortos(int estado){
    if (estado == 1) {
        printf("Vizinhas-mortas: MOSTRANDO\n");
    } else {
        printf("Vizinhas-mortas: ESCONDIDAS\n");
    }
}
