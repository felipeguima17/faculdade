#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	typedef struct calendario
	{
		int* dia;
		int* mes;
		int* ano;
	};

	calendario d_atual;

	int d = 21;
	int m = 04;
	int a = 2021;

	d_atual.dia = &d;
	d_atual.mes = &m;
	d_atual.ano = &a;

	printf("%d/%d/%d\n", d, m, a);
	printf("%d/%d/%d\n\n", *d_atual.dia, *d_atual.mes, *d_atual.ano);

	printf("Conteúdo de mes, dia e ano = %p, %p e %p\n", d_atual.dia, d_atual.mes, d_atual.ano);
	printf("Endereços de d, m, a = %p, %p, %p\n", &d, &m, &a);



	return 0;
}