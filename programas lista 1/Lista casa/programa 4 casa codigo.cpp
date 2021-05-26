#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, A, P;
	printf("insira o valor de um lado do retangulo: ");
	scanf("%f", &a);
	printf("insira o valor do outro lado do retangulo: ");
	scanf("%f", &b);
	A=a*b;
	P=2*a+2*b;
	printf("a area do retangulo e: %.2f", A);
	printf("o perimetro do retangulo e: %.2f", P);
	
	getch();
	return 0;
}
