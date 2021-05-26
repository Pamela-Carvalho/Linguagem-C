#include<stdio.h>
#include<conio.h>

int main()
{
	float real, dolar;
	printf("entre com o valor em real: ");
	scanf("%f", &real);
	dolar=(real/2.40);
	printf("o valor em dolar e: %.2f", dolar);
	
	getch();
	return 0;
}
