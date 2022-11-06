#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void altera_numero(int* na);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	typedef struct numeros
	{
		int a, b;
	};

	numeros num = {10, 15}, * pont_num;

	pont_num = &num;

	printf("IMPRESSÃO DOS NÚMEROS ANTES DA CHAMADA DA FUNÇÃO:\n");
	printf("a = %d\n", (*pont_num).a);
	printf("b = %d", (*pont_num).b);

	printf("\n\nIMPRESSÃO DOS NÚMEROS NA CHAMADA DA FUNÇÃO:\n");
	altera_numero(&num.a);
	altera_numero(&num.b);
	/*NOTE QUE FOI FEITA PASSAGEM DE STRUCT POR PARÂMETRO, NESTE CASO
	A ALTERAÇÃO É FEITA DIRETAMENTE NA STRUCT*/

	printf("\n\nIMPRESSÃO DOS NÚMEROS APÓS A CHAMADA DA FUNÇÃO:\n");
	printf("a = %d\n", (*pont_num).a);
	printf("b = %d\n\n", (*pont_num).b);

	return 0;
}

void altera_numero(int* na)
{
	*na = *na + 3;
	printf("Valor alterado para %d\n", *na);
}