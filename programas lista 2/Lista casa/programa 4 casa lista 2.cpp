#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, c;
	printf("insira o primeiro valor:");
	scanf("%f", &a);
	printf("insira o segundo valor:");
	scanf("%f", &b);
	printf("insira o terceiro valor:");
	scanf("%f", &c);
	if((a>b)&&(a>c)&&(b>c))
	printf("o valor maior, o valor menor e o valor do meio sao respectivamente: %.2f %.2f %.2f", a, c, b);
	
	if((a>b)&&(a>c)&&(c>b))	
	printf("o valor maior, o valor menor e o valor do meio sao respectivamente: %.2f %.2f %.2f", a, b, c);
	
	if((b>a)&&(b>c)&&(a>c))
	printf("o valor maior, o valor menor e o valor do meio sao respectivamente: %.2f %.2f %.2f", b, c, a);
	
	if((b>a)&&(b>c)&&(c>a))
	printf("o valor maior, o valor menor e o valor do meio sao respectivamente: %.2f %.2f %.2f", b, a, c);
	
	if((c>a)&&(c>b)&&(a>b))
	printf("o valor maior, o valor menor e o valor do meio sao respectivamente: %.2f %.2f %.2f", c, b, a);
	else
	printf("o valor maior, o valor menor e o valor do meio sao respectivamente: %.2f %.2f %.2f", c,a, b);
	
	getch();
	return 0;
}
