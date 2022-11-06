#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	struct cadastro_aluno           // typedef struct {
	{
		char nome[40];
		int idade;
		char cpf[12];
		float mensalidade;
	};                             // } cadastro_aluno;

	struct cadastro_aluno aluno;   // cadastro_aluno aluno;

	printf("Digite o nome do aluno: ");
	gets_s(aluno.nome);

	printf("Digite a idade do aluno: ");
	scanf_s("%d", &aluno.idade);
	//while ((aluno.idade = getchar()) != '\n' && aluno.idade != EOF) {}
	getchar();
	fflush(stdin);

	printf("Digite o CPF do aluno: ");
	gets_s(aluno.cpf);

	printf("Digite o valor da mensalidade do aluno: R$");
	scanf_s("%f", &aluno.mensalidade);
	getchar();
	fflush(stdin);

	printf("\n*************** CADASTRO DO ALUNO *********************\n");
	printf("Nome: %s\n", aluno.nome);
	printf("Idade: %d\n", aluno.idade);
	printf("CPF: %s\n", aluno.cpf);
	printf("Mensalidade: R$%.2f\n", aluno.mensalidade);
	printf("*********************************************************\n\n");

	return 0;
}