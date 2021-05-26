#include<stdio.h>
#include<conio.h>

int main()
{
	float p1, p2, ativ, M;
	printf("insira a nota da primeira prova: ");
	scanf("%f", &p1);
	printf("insira a nota da segunda prova: ");
	scanf("%f", &p2);
	printf("insira a nota das atividade: ");
	scanf("%f", &ativ);
	M=(p1*4+p2*4+ativ*2)/10;
	printf("a media e: %.2f", M);
	
	getch();
	return 0;
}
