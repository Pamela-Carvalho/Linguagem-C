#include<stdio.h>
#include<conio.h>

int main ()
{
	float V, A, R;
	printf("insira o raio da esfera: ");
	scanf("%f", &R);
	V=4/3*3.14159*R*R*R;
	A=4*3.14159*R*R;
	printf("o volume da esfera e: %f", V);
	printf("a area da esfera e: %f", A);
	
	getch();
	return 0;
}
