#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int calculo(int *bas, int *expo);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int base, expoente;
	int *bas, *expo;
	
	printf("\nInsira o valor da base:");
	scanf("%d", &base);
	printf("\nInsira o valor do expoente:");
	scanf("%d", &expoente);
	
	bas = &base;
	expo = &expoente;
	
	
	calculo(bas, expo);
	
	getch();
	return 0;
}

int calculo(int *bas, int *expo)
{
	int res;
	
	res = pow(*bas, *expo);
	
	printf("\nO resultado é: %d", res);
}
