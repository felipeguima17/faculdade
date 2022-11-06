#include<stdio.h>
#include<locale.h>

int main()
{
	int veta[3] = { 1, 2, 3 }, vetb[3] = { 4, 5, 6 }, vetc[3] = { 7, 8, 9 };
	int* vetpont[3];

	vetpont[0] = veta;  // ou vetpont[0] = &veta[0]
	vetpont[1] = vetb;  // ou vetpont[1] = &vetb[0]
	vetpont[2] = vetc;  // ou vetpont[2] = &vetc[0]

	printf("Vetor A = ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", veta[i]);
	}

	printf("\n&VetorA = %p\n", &veta);
	printf("&VetorA[0] = %p\n", &veta[0]);
	printf("&VetorA[1] = %p\n", &veta[1]);
	printf("&Vetor Ponteiro = %p\n", &vetpont);
	printf("Vetor Ponteiro[0] = %p\n", vetpont[0]);
	printf("Vetor Ponteiro = %d\n", *vetpont[0]);



	return 0;
}