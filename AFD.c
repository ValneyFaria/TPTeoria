#include "libs.h"

int main() {
	int numNodes = 0, numConexoes = 0, linhas = 0, colunas = 0;
	char **automato;

	printf("Numero de Nos do Automato:");
	scanf("%d", &numNodes);

	printf("Numero de Conexoes do Automato:");
	scanf("%d", &numConexoes);

	printf("numNodes: %d\n", numNodes);
	printf("numConexoes: %d\n", numConexoes);

	printf("Numero de Linhas: ");
	scanf("%d", &linhas);

	printf("Numero de Colunas: ");
	scanf("%d", &colunas);

	if ((linhas < 1) || (colunas < 1)) {
     	printf("\nFatal error! (function: main)\n");
      	exit(1);
   }
	return 0;
}
