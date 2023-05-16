#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Inserir os valores de 2 matrizes, fazer a soma e a multiplicação entre elas armazenando os valores em uma nova matriz.

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int m1[3][5], m2[3][5], m3[3][5];
	int i, j;
	
	/* Adicionando valores na primeira matriz*/
	for(i=0; i<3; i++)
		for(j=0; j<5;j++) {
			printf("Digite os números da matriz 1 [%d][%d]: ", i, j);
			scanf("%d", &m1[i][j]);
		}
	printf("\n");
	system("cls");
	
	/* Adicionando valores na segunda matriz*/
	for(i=0; i<3; i++)
		for(j=0; j<5; j++){
			printf("Digite os números da Matriz 2 [%d][%d]: ", i, j);
			scanf("%d", &m2[i][j]);
		}
	printf("\n");
	system("cls");

	/* Soma e Multiplicação das duas matrizes armazenando os valores em uma terceira matriz*/
	printf("----------- Soma das Matrizes -----------");
	printf("\n");
	for(i=0; i<3; i++){
		printf("[");
		m3[i][j] = 0;
		for(j=0; j<5; j++){
			m3[i][j] = m1[i][j] + m2[i][j];
		printf("\t%d ", m3[i][j]);
	}
	printf("]");
	printf("\n");
	}

	printf("------- Multiplicação das Matrizes -------");
	printf("\n");
	for(i=0; i<3; i++){
		printf("[");
		for(j=0; j<5; j++){
			m3[i][j] = m1[i][j] * m2[i][j];
		printf("\t%d ", m3[i][j]);
	}
	printf("]");
	printf("\n");
	}
}
