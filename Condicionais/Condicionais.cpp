// Condicionais.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"


int main()
{
	//OPERADORES LOGICOS
	// == IGUAL		!= DIFERENTE		< = MENOR		 > = MAIOR		 <= =MENOR IGUAL		>=  =MAIOR IGUAL

	// CONDICAO
	/* .Operador logico sempre entre 2 operandos
	   .Resultado da operacao pode ser apenas (true/false)
	   .Conectores logicos
			."e"  - &&
			."ou" - || (pipe pipe)
			*/
	//SE
	if (true)
	{
		// este codigo sera executado
	}

	if (false)
	{
		// este codigo nbao sera executado 
	}
   
	int a = 0;

	if (a == 0)
	{
		printf("a igual a zero\n");
	}

	if (a != 0)
	{
		printf("a diferente de zero\n");
	}

	int b = 5;

	if (b < a)
	{
		printf("B menor que A");
	}

	if (a <= b)
	{
		printf("A menor ou igual a B")
	}

}

