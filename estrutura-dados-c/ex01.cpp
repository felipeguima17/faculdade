#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

// declaração das funções
int menu();
void tocando();
void inserir_track(int cod, char* musica, int duracao, char* artista, char* album, int ano);
void tocar_anterior();
void tocar_proxima();
void listar();

// declaração das structs
typedef struct _Track {
	int cod_musica;
	char musica[40];
	int duracao;
	char artista[40];
	char album[40];
	int ano;
};

typedef struct _List {
	_Track Track;
	_List* ant;
	_List* prox;
};

_List* Head, * Tail, * Aux = NULL;


// Programa principal
int main() {
	setlocale(LC_ALL, "Portuguese");

	int op, c;
	int cod = 0, duracao, ano;
	char musica[40], artista[40], album[40];

	while (true) {
		op = menu();
		switch (op) {
		case 1: // inserir track
			cod++;
			printf("Informe o nome da música: ");
			gets_s(musica);
			printf("Informe a duração da música em segundos: ");
			scanf_s("%d", &duracao);
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Informe o nome do artista/banda: ");
			gets_s(artista);
			printf("Informe o nome do álbum: ");
			gets_s(album);
			printf("Informe o ano de lançamento da música: ");
			scanf_s("%d", &ano);
			while ((c = getchar()) != '\n' && c != EOF) {}
			inserir_track(cod, musica, duracao, artista, album, ano);
			break;

		case 2:
			tocar_anterior();
			break;

		case 3:
			tocar_proxima();
			break;

		case 4:
			listar();
			break;

		case 5: // sair
			printf("Saindo...\n\n\n");
			system("pause");
			return 0;

		default:
			printf("Opção inválida!\n\n\n");
			system("pause");
			break;
		}
	}


	printf("\n\n\n");
	system("pause");
	return 0;
}

// função para escolher uma opção
int menu() {
	int op, c;
	
	system("cls");
	tocando();
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("\t\tMENU\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("1 - Inserir música\n");
	printf("2 - Música anterior\n");
	printf("3 - Música posterior\n");
	printf("4 - Listar playlist\n");
	printf("5 - Sair\n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("Escolha uma opção: ");
	scanf_s("%d", &op);
	while((c = getchar()) != '\n' && c != EOF) {}
	system("cls");

	return op;
}

// mostra a música atual
void tocando() {
	if (Head == NULL) {
		printf("Playlist vazia...\n\n");
	}
	else {
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("\t\tTOCANDO......\n");
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
		printf("Track: %d\n", Aux->Track.cod_musica);
		printf("Música: %s\n", Aux->Track.musica);
		printf("Duração: %d sec\n", Aux->Track.duracao);
		printf("Artista: %s\n", Aux->Track.artista);
		printf("Álbum: %s\n", Aux->Track.album);
		printf("Ano: %d\n", Aux->Track.ano);
		printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
	}
}

// função para inserir uma música no final da lista
void inserir_track(int cod, char* musica, int duracao, char* artista, char* album, int ano) {
	_List* novaFaixa = (_List*)malloc(sizeof(_List));

	novaFaixa->Track.cod_musica = cod;
	strcpy_s(novaFaixa->Track.musica, musica);
	novaFaixa->Track.duracao = duracao;
	strcpy_s(novaFaixa->Track.artista, artista);
	strcpy_s(novaFaixa->Track.album, album);
	novaFaixa->Track.ano = ano;

	int flag = 0;

	if (Head == NULL) {
		Head = novaFaixa;
		Tail = novaFaixa;
		novaFaixa->ant = Head;
		novaFaixa->prox = Head;
		flag = 1;
		Aux = Head;
	}
	else {
		Tail->prox = novaFaixa;
		novaFaixa->ant = Tail;
		Tail = novaFaixa;
		Tail->prox = Head;
		Head->ant = Tail;
		flag = 1;
	}

	if (flag == 0)
		printf("ERRO!\n\n");
	else
		printf("Música inserida com sucesso!\n\n");
	system("pause");
}

// função para tocar música anterior
void tocar_anterior() {
	if (Head != NULL)
		Aux = Aux->ant;
}

// função para tocar música posterior
void tocar_proxima() {
	if (Head != NULL)
		Aux = Aux->prox;
}

// função para listar a playlist
void listar() {
	if (Head == NULL) {
		printf("Playlist vazia...\n\n");
	}
	else {
		_List* varredura = Head;
		do {
			printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
			printf("Track: %d\n", varredura->Track.cod_musica);
			printf("Música: %s\n", varredura->Track.musica);
			printf("Duração: %d sec\n", varredura->Track.duracao);
			printf("Artista: %s\n", varredura->Track.artista);
			printf("Álbum: %s\n", varredura->Track.album);
			printf("Ano: %d\n", varredura->Track.ano);
			printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
			varredura = varredura->prox;
		} while (varredura != Head); 
	}
	printf("\n\n");
	system("pause");
}