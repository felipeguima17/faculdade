#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int x, y, z;

	printf("Endere�o da vari�vel x = %p\n", &x);
	printf("Endere�o da vari�vel y = %p\n", &y);
	printf("Endere�o da vari�vel z = %p\n\n", &z);

	system("pause");
	return 0;
}