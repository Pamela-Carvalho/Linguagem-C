#include<stdio.h>
#include<conio.h>

int main()
{
	float t, s, s0, v0, a;
	printf("insira o tempo: ");
	scanf("%f", &t);
	s=2+3*t+1/2*10*t*t;
	printf("o espaco percorrido foi: %.2f", s);
	
	getch();
	return 0;
}
