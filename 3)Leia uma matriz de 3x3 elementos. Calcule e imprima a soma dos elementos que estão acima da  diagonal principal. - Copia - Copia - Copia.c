#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 3
#define C 3

int main(){
	int i, j, m[L][C], cSoma=0;

	/* carregando dados automaticamente para teste
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			//teste
			m[i][j]=j+1;
		}
	}
	*/
	// solicita a entrada dos dados
	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			// c. Soma dos elementos acima da diagonal principal;
			if (j>i) {
				cSoma = cSoma + m[i][j];
			}

		}
	}

        printf("\n\n  Matriz \n\n");
        for(i=0; i < L; i++){
		printf("  %i\t[ ", i);
		for (j=0; j < C; j++){
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n\n-------------------------\n");
	printf("\t SOMA ACIMA DA DIAGONAL: %i\n", cSoma);

	return 0;
}
