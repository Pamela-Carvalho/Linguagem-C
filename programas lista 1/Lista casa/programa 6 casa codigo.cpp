#include<stdio.h>
#include<conio.h>

int main()
{
	float r, A, C;
	printf("insira o raio da circunferencia: ");
	scanf("%f", &r);
	A=3.14159*r*r;
	C=2*3.14159*r;
	printf("a area da circunferencia e: %.2f", A);
	printf("o comprimento da circunferencia e: %.2f", C);
	
	getch();
	return 0;
	
}
