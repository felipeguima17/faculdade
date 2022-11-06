#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	typedef struct calendario
	{
		int dia;
		int mes;
		int ano;
	};

	calendario d_atual, * d_ponteiro;

	d_ponteiro = &d_atual;

	(*d_ponteiro).dia = 21;
	(*d_ponteiro).mes = 04;
	(*d_ponteiro).ano = 2021;

	/*Pode ser escrito como:

	d_ponteiro->dia = 21;
	d_ponteiro->mes = 04;
	d_ponteiro->ano = 2021;
	*/

	printf("Endereço de d_atual = %p\n", &d_atual);
	printf("Endereço de d_ponteiro = %p\n", &d_ponteiro);
	printf("Valor armazenado por d_ponteiro = %p\n\n", d_ponteiro);
	printf("%d/%d/%d\n\n", (*d_ponteiro).dia, (*d_ponteiro).mes, (*d_ponteiro).ano);


	/* Pode ser escrito como:
	
	printf("%d/%d/%d\n\n", d_ponteiro->dia, d_ponteiro->mes, d_ponteiro->ano);
	*/

	return 0;
}