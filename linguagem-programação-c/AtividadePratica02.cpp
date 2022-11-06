#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 7

int soma_vetor(int* v);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int vet_i[TAM], * p_vet, ru, flag;
	p_vet = &vet_i[0];

	// recebe um número do usuário até que o valor 1371185 seja digitado
	do
	{
		printf("Digite o RU 1371185: ");
		scanf_s("%d", &ru);
	} while (ru != 1371185);
	
	flag = ru;

	// separa os dígitos do número lido, usando o módulo e a divisão inteira, 
	//e os insere em um vetor
	for (int i = 0; i < TAM; i++)
	{
		if (i == 0)
		{
			p_vet[i] = flag / 1000000;
		}
		if (i == 1)
		{
			flag = flag % 1000000;
			p_vet[i] = flag / 100000;
		}
		if (i == 2)
		{
			flag = flag % 100000;
			p_vet[i] = flag / 10000;
		}
		if (i == 3)
		{
			flag = flag % 10000;
			p_vet[i] = flag / 1000;
		}
		if (i == 4)
		{
			flag = flag % 1000;
			p_vet[i] = flag / 100;
		}
		if (i == 5)
		{
			flag = flag % 100;
			p_vet[i] = flag / 10;
		}
		if (i == 6)
		{
			flag = flag % 10;
			p_vet[i] = flag;
		}
	}

	system("CLS"); // limpa tela

	//imprime o vetor
	printf("VETOR: [");
	for (int i = 0; i < TAM; i++)
	{
		if (i < TAM - 1)
			printf("%d, ", p_vet[i]);
		else
			printf("%d]\n\n", p_vet[i]);
	}

	// mostra a soma dos elementos do vetor
	printf("A soma dos elementos do vetor é %d\n\n", soma_vetor(p_vet));
		
	system("pause");
	return 0;
}

// função que retorna a soma dos valores do vetor
int soma_vetor(int* v)
{
	int soma = 0;
	for (int i = 0; i < 7; i++)
	{
		soma += v[i];
	}

	return soma;
}