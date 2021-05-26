#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, d;
	printf("entre com o primeiro valor:");
	scanf("%f", &a);
	printf("entre com o segundo valor:");
	scanf("%f", &b);
	d=a-b;
	if(a==b)
	printf("os numeros digitados sao iguais, entao nao ha diferenca entre eles");
	
    if(a<b)
    {d=b-a;}
	else
	d=a-b;
	printf("\na diferenca e: %.2f", d);
	
	getch();
	return 0;
}
