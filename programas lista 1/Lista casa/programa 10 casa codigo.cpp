#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, c;
	printf("insira o valor de a: ");
	scanf("%f", &a);
	printf("insira o valor de b: ");
	scanf("%f", &b);
	c=a;
	a=b;
	b=c;
	printf("o valor trocado: de a %.2f de b %.2f", a, b);
	
	getch();
	return 0;
}
