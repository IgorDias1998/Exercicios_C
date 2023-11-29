//Sessão de prototipação
void bubbleSort();
void imprimirVetor();

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int vet[] = {23, 56, 17, 25, 33, 98, 14, 21, 68, 10};
int i, fim, inicio, tam;
int comp, trocas;
int aux;
int j = 0;

int main()
{
	tam = sizeof(vet) / sizeof(int);
	
	inicio = i = comp = trocas = aux = 0;
	
	puts("Vetor original");
	for(i = 0; i<tam; i++)
	{
		printf("%d |", vet[i]);
	}
	
	bubbleSort();
	imprimirVetor();
	
	printf("\nComparacoes = %d, \nTrocas = %d", comp, trocas);
	
}//fim do main

//Função BubbleSort
void bubbleSort()
{
	fim = sizeof(vet) / sizeof(int);
	
	while(j < fim)
	{
		for(i = 0; i < fim-1; i++)
		{
			comp++;
			if(vet[i] > vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				trocas++;
			}
		}
		fim--;
	}
}

//Função para imprimir o vetor
void imprimirVetor()
{
	puts("\nVetor Ordenado");
	for(i = 0; i < tam; i++)
	{
		printf("%d |", vet[i]);
	}
}
