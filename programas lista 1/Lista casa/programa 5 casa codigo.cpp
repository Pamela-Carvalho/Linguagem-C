#include<stdio.h>
#include<conio.h>

int main()
{
	float m, h, IMC;
	printf("insira a massa da pessoa: ");
	scanf("%f", &m);
	printf("insira a altura da pessoa: ");
	scanf("%f", &h);
	IMC=m/h*h;
	printf("o IMC e: %.2f", IMC);
	
	getch();
	return 0;
}
