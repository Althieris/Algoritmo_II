// Aula_Copel.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdlib.h>
#define MATC 2
#define MATL 2
/*int main()
{
	int i, num[5], num2;
	num2 = 99;
	for (i = 0; i <= 5; i++) {
		scanf_s("%d", &num[i]);
	}
	for (i = 0; i <= 5; i++) {
		printf("%d\n", num[i]);
	}
	system("pause");
	return 0;
} */
/*
int main()
{
	int i, iVet[10], iVet2[10], iVetSoma[10];
	for (i = 0; i < 10; i++) {
		iVet[i] = ((i + 1) * 2);
	}
	printf_s("\niVet => ");
	for (i = 0; i < 10; i++) {
		printf("%3d ", iVet[i]);
	}
	for (i = 0; i < 10; i++) {
		iVet2[i] = (i + 10);
	}
	printf_s("\niVet2 => ");
	for (i = 0; i < 10; i++) {
		printf("%3d ", iVet2[i]);
	}
	printf_s("\niVetSoma => ");
	for (i = 0; i < 10; i++) {
		printf_s("%3d", iVetSoma[i] = (iVet[i] + iVet2[i]));
	}
	
system("pause");
return 0;
} */
/*
int main()
{
	int i, iVet[8], iQtde = 0, iSoma30 = 0, iSoma = 0;
	for (i = 0; i < 8; i++)
	{
		printf_s("Entre com o Numero %i =", i + 1);
		scanf_s("%i", &iVet[i]);
	}
	for (i = 0; i < 8; i++)
	{
		if (iVet[i] > 30) {
			iQtde++;
			iSoma30 = iSoma30 + iVet[i];
			printf_s("\nNumero maior que 30 = %i", iVet[i]);
		}
	}
	printf_s("\n\nQtde de num. maiores que 30 = %i", iQtde);
	printf_s("A soma dos numeros maior que 30 = %i", iSoma);
	printf_s("A soma de todos os numeros = %i")
	system("pause");
	return 0;

}*/
int main()
{
	int i, j, iMat1[MATC][MATL], iMat2[MATC][MATL], iMat3[MATC][MATL];
	for (i = 0; i < MATL; i++) {
		for (j = 0; j < MATC; j++) {
			printf_s("\nIMat1 - linha %i coluna %i =", i, j);
			scanf_s("%i", iMat1[i][j]);
		}
	}
	for (i = 0; i < MATL; i++) {
		for (j = 0; j < MATC; j++) {
			printf_s("\nIMat1 - linha %i coluna %i =", i, j);
			scanf_s("%i", iMat1[i][j]);
		}
	}
	system("pause");
	return 0;
}