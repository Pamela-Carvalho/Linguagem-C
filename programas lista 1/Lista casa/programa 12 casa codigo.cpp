#include<stdio.h>
#include<conio.h>

int main()
{
	float s, t, vm;
	printf("insira o espaco percorrido: ");
	scanf("%f", &s);
	printf("insira o tempo gasto: ");
	scanf("%f", &t);
	vm=s/t;
	printf("a velocidade media e: %.2f", vm);
	
	getch();
	return 0;
}
