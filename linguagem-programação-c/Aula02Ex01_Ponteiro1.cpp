#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num = 5;
	int* pontnum;

	pontnum = &num;

	printf("num = %d\n", num);
	printf("&num = %p\n", &num);
	printf("pontnum = %p\n", pontnum);
	printf("&pontnum = %p\n", &pontnum);
	printf("*pontnum = %d\n", *pontnum);

	return 0;
}