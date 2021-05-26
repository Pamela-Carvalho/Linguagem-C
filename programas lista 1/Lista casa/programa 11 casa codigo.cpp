#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b;
	printf("insira o valor de a: ");
	scanf("%f", &a);
	printf("insira o valor de b:");
	scanf("%f", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("o valor trocado: de a %.2f de b %.2f", a, b);
	
	getch();
	return 0;
}

