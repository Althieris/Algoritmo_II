// Aula_Ponteiros.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

//EXER 1
/*int soma(int n)
{
	if (n == 1)
		return 1;
	else
		return (n + soma(n - 1));
}

int main()
{
	int n;
	printf("Digite um inteiro positivo: ");
	scanf_s("%d", &n);

	printf("Soma: %d\n", soma(n));

	system("pause");
	return 0;
} */

//EXER 2

int fatorial(int x)
{
	if (x == 0)
		return 1;
	else
		return x * fatorial(x - 1);

}




