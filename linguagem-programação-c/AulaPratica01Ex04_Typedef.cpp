#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	typedef float prova;
	typedef int RU;

	typedef struct registro
	{
		RU matricula;
		prova n1, n2, media;
	};

	registro aluno;
	
	printf("Digite a matrícula do aluno: ");
	scanf_s("%d", &aluno.matricula);
	printf("Digite a primeira nota: ");
	scanf_s("%f", &aluno.n1);
	printf("Digite a segunda nota: ");
	scanf_s("%f", &aluno.n2);

	aluno.media = (aluno.n1 + aluno.n2) / 2;

	printf("\n\n=== Aluno: %d ===\n\n", aluno.matricula);
	printf("Nota 1 = %.2f\n", aluno.n1);
	printf("Nota 2 = %.2f\n", aluno.n2);
	printf("Média = %.2f\n\n", aluno.media);

	system("pause");
	return 0;
}