#include<stdio.h>
/*Considere a seguinte declaração: int A, *B, **C, ***D; 
escreva um programa que leia a variável a e calcule e 
exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas os ponteiros B, C e D. 
O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo.*/
int main()
{
	int A, *B, **C, ***D;
	
	printf("Digite o valor de A: ");
	scanf("%d", &A);
	
	B = &A;
	C = &B;
	D = &C;
	
	*B = 2 * A;
	printf("%d\n", *B);
	**C = 3 * A;
	printf("%d\n", **C);
	***D = 4 * A;
	printf("%d\n", ***D);
}
