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

	printf("IMPRESSÃO DOS NÚMEROS ANTES DA CHAMADA DA FUNÇÃO:\n");
	printf("a = %d\n", num.a);
	printf("b = %d", num.b);

	printf("\n\nIMPRESSÃO DOS NÚMEROS NA CHAMADA DA FUNÇÃO:\n");
	altera_numero(num.a);
	altera_numero(num.b);
	/*NOTE QUE FOI FEITA PASSAGEM DE STRUCT POR VALOR, NESTE CASO 
	É FEITA UMA CÓPIA NA MEMÓRIA E A VARIÁVEL EM QUESTÃO NÃO É ALTERADA*/

	printf("\n\nIMPRESSÃO DOS NÚMEROS APÓS A CHAMADA DA FUNÇÃO:\n");
	printf("a = %d\n", num.a);
	printf("b = %d\n\n", num.b);
	

	return 0;
}

void altera_numero(int n)
{
	int n_alterado = n + 3;
	printf("Valor %d alterado para %d\n", n, n_alterado);
}

