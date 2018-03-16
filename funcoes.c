#include "libs.h"

char ** Aloca_Automato (char ** matriz, int linhas, int colunas) {
	int i = 0; // Variável Auxiliar

	matriz = (char **) malloc (linhas * sizeof(char*)); // Aloca um vetor de ponteiros de char
	
	for (i = 0; i < colunas; ++i) { // Percorre as linhas do Vetor de Ponteiros
		matriz[i] = (char *) malloc (colunas * sizeof(char)); // Aloca um Vetor de char para cada posição do Vetor de Ponteiros.
		for (j = 0; j < Colunas; j++){ // Percorre o Vetor de caracteres atual.
            m[i][j] = 0; //Inicializa com 0.
       	}		
	}

	return matriz;
}

char ** Aloca_Automato (char ** matriz, int linhas, int colunas) {
	int i = 0;


	for (i = 0; i < linhas; ++i) {
		
	}
}
