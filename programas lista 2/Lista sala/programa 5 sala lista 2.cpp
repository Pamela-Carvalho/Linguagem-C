#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, c;
	printf("insira o valor de a:");
	scanf("%f", &a);
	printf("insira o valor de b:");
	scanf("%f", &b);
	printf("insira o valor de c:");
	scanf("%f", &c);
	if((a<b)&&(b<c))
	{printf("os valores em ordem crescente sao: %.2f %.2f %.2f", a, b, c);}
	else 
	if((b<c)&&(c<a))
	{printf("os valores em ordem crescente sao: %.2f %.2f %.2f", b, c, a);}
	else
	if((c<a)&&(a<b))
	{printf("os valores em ordem crescente sao: %.2f %.2f %.2f", c, a, b);}
	else
	if((a<c)&&(c<b))
	{printf("os valores em ordem crescente sao: %.2f %.2f %.2f", a, c, b);}
	else
	if((b<a)&&(a<c))
	{printf("os valores em ordem crescente sao: %.2f %.2f %.2f", b, a, c);}
	else
	{printf("os valores em ordem crescente sao: %.2f %.2f %.2f", c, b, a);}
	
	getch();
	return 0;

}
