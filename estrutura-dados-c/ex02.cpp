#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// declaração das structs
typedef struct _Aluno {
	int ru;
	char nome[40], email[50];
};

typedef struct _Arvore {
	_Aluno Aluno;
	_Arvore* esq, * dir;
};

// declaração das funções
int menu();
void inserirCadastro(_Arvore** ElementoVarredura, int r, char n[], char e[]);
_Arvore* buscarAluno(_Arvore** ElementoVarredura, int num);

// programa principal
int main() {
	setlocale(LC_ALL, "portuguese");

	int op, c, nBuscado;
	_Arvore* Root = (_Arvore*)malloc(sizeof(_Arvore));
	Root = NULL;
	_Arvore* Busca;

	int ru[10] = { 1371180, 1371181, 1371182, 1371183, 1371184, 1371185,
		1371186, 1371187, 1371188, 1371189 };
	char nome[10][30] = { "Ana", "Beto", "Carlos", "Didi", "Eder",
		"Felipe Marchi Guimarães", "Gabi", "Heitor", "Igor", "Julio" };
	char email[10][20] = { "a@a.com", "b@b.com", "c@c.com", "d@d.com", "e@e.com",
		"fmg.17@outlook.com", "g@g.com", "h@h.com", "i@i.com", "j@j.com" };

	// função para inserir 10 cadastros prévios
	for (int i = 0; i < 10; i++) {
		inserirCadastro(&Root, ru[i], nome[i], email[i]);
	}
	
	while (true) {
		op = menu();

		switch (op) {
			case 1:
				printf("Informe o RU que deseja buscar: ");
				scanf_s("%d", &nBuscado);
				while ((c = getchar()) != '\n' && c != EOF) {}
				system("cls");

				Busca = buscarAluno(&Root, nBuscado);
				if (Busca == NULL)
					printf("Cadastro não encontrado...\n\n");
				else {
					printf("Encontrei os seguintes dados...\n\n");
					printf("RU: %d\n", Busca->Aluno.ru);
					printf("Nome: %s\n", Busca->Aluno.nome);
					printf("Email: %s\n\n\n", Busca->Aluno.email);
				}
				system("pause");
				break;

			case 2:
				printf("Saindo...\n\n");
				system("pause");
				return 0;

			default:
				printf("Opção inválida!\n\n");
				system("pause");
				break;
		}
	}

	system("pause");
	return 0;
}

// função do menu
int menu() {
	int op, c;

	system("cls");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
	printf("1 - Buscar aluno por RU\n");
	printf("2 - Sair\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	printf("Digite uma opção: ");
	scanf_s("%d", &op);
	while((c = getchar()) != '\n' && c != EOF) {}

	system("cls");
	return op;
}

void inserirCadastro(_Arvore** ElementoVarredura, int r, char n[], char e[]) {
	if (*ElementoVarredura == NULL) {
		_Arvore* NovoElemento = NULL;
		NovoElemento = (_Arvore*)malloc(sizeof(_Arvore));
		NovoElemento->dir = NULL;
		NovoElemento->esq = NULL;

		NovoElemento->Aluno.ru = r;
		strcpy_s(NovoElemento->Aluno.nome, n);
		strcpy_s(NovoElemento->Aluno.email, e);

		*ElementoVarredura = NovoElemento;
		return;
	}

	if (r < (*ElementoVarredura)->Aluno.ru) {
		inserirCadastro(&(*ElementoVarredura)->esq, r, n, e);
	}
	else if (r > (*ElementoVarredura)->Aluno.ru) {
		inserirCadastro(&(*ElementoVarredura)->dir, r, n, e);
	}
}

_Arvore* buscarAluno(_Arvore** ElementoVarredura, int num) {
	if (*ElementoVarredura == NULL)
		return NULL;

	if (num < (*ElementoVarredura)->Aluno.ru)
		buscarAluno(&((*ElementoVarredura)->esq), num);

	else if (num > (*ElementoVarredura)->Aluno.ru)
		buscarAluno(&((*ElementoVarredura)->dir), num);

	else
		return *ElementoVarredura;
}