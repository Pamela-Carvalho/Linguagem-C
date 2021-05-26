#include<stdio.h>
#include<conio.h>

int main()
{
	float real, dolar;
	printf("insira o valor em dolar: ");
	scanf("%f", &dolar);
	real=2.40*dolar;
	printf("o valor em real e: %.2f", real);
	
	getch();
	return 0;
}
