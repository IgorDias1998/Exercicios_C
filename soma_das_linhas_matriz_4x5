#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, m[4][5], soma[4];
	
	for(i=0;i<4;i++)
		for(j=0;j<5;j++){
			printf("Matriz [%d][%d]", i, j);
			scanf("%d", &m[i][j]);
	}
	system("cls");
 	
	for(i=0;i<4;i++){
 		soma[i] = 0;
 	for(j=0;j<5;j++)
 		soma[i] += m[i][j];
	}
	printf("\n:-:-: Valores Originais :-:-:\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++)
			printf("[%d]" ,m[i][j]);
			printf(" -> Soma da linha: %d", soma[i]);
			printf("\n");
 	}
}
