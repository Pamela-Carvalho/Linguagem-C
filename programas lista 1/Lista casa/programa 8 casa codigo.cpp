#include<stdio.h>
#include<conio.h>

int main()
{
	float b1, b2,b3, b4, M;
	printf("insira a nota do primeiro bimestre: ");
	scanf("%f", &b1);
	printf("insira a nota do segundo bimestre: ");
	scanf("%f", &b2);
	printf("insira a nota do terceiro bimestre: ");
	scanf("%f", &b3);
	printf("insira a nota do quarto bimestre: ");
	scanf("%f", &b4);
	M=(b1+b2+b3+b4)/4;
	printf("a media final e: %f", M);
	
	getch();
	return 0;
}
