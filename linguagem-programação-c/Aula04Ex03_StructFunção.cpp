#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void altera_numero(int n);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	typedef struct numeros
	{
		int a, b;
	};

	numeros num = {10, 14};

	printf("IMPRESS�O DOS N�MEROS ANTES DA CHAMADA DA FUN��O:\n");
	printf("a = %d\n", num.a);
	printf("b = %d", num.b);

	printf("\n\nIMPRESS�O DOS N�MEROS NA CHAMADA DA FUN��O:\n");
	altera_numero(num.a);
	altera_numero(num.b);
	/*NOTE QUE FOI FEITA PASSAGEM DE STRUCT POR VALOR, NESTE CASO 
	� FEITA UMA C�PIA NA MEM�RIA E A VARI�VEL EM QUEST�O N�O � ALTERADA*/

	printf("\n\nIMPRESS�O DOS N�MEROS AP�S A CHAMADA DA FUN��O:\n");
	printf("a = %d\n", num.a);
	printf("b = %d\n\n", num.b);
	

	return 0;
}

void altera_numero(int n)
{
	int n_alterado = n + 3;
	printf("Valor %d alterado para %d\n", n, n_alterado);
}

