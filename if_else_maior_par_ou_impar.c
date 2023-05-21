#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Faça um programa que leia dois números inteiro e mostre uma mensagem indicando se este número: 

- é par ou ímpar 

- e se é positivo ou negativo. 

- o maior e o menor */

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num_a, num_b, resto_a,resto_b;
	
	printf("Digite um valor: \n");
	scanf("%d", &num_a);
	
	printf("Digite um valor: \n");
	scanf("%d", &num_b);
	
	resto_a = num_a % 2;
	resto_b = num_b % 2;
	
	if (resto_a == 0){
		printf("O número %d é par.\n", num_a);
	}
	else
		printf("O número %d é ímpar.\n", num_a);
	
	if (resto_b == 0){
		printf("O número %d é par.\n", num_b);
	}
	else 
		printf("O número %d é ímpar.\n", num_b);
	
	if (num_a > 0){
		printf("O número %d é positivo.\n", num_a);
	}
	else
		printf("O número %d é negativo.\n", num_a);
		
	if (num_b > 0){
		printf("O número %d é positivo.\n", num_b);
	}
	else
		printf("O número %d é negativo.\n", num_b);
		
	if (num_a > num_b){
		printf("\nO maior número é o %d, e o menor é o %d", num_a,num_b);
	}
	else
		printf("\nO maior número é o %d, e o menor é o %d", num_b, num_a);
		
}
