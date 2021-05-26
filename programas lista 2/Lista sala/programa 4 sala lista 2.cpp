#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b,c;
	printf("digite o valor do primeiro lado do triangulo:");
	scanf("%f", &a);
	printf("digite o valor do segundo lado do triangulo:");
	scanf("%f", &b);
	printf("digite o valor do terceiro lado do triangulo:");
	scanf("%f", &c);
	if ((a<b+c)&&(b<a+c)&&(c<a+b)){
	if((a==b)&&(b==c))
	{printf("e um triangulo equilatero");}
	else
	if((a==b)||(a==c)||(b==c))
	{printf("e um triangulo isosceles");}
	else
	{printf("e um triagulo escaleno");}}
	else
	{printf("estes valores nao formam um triangulo");}	
	
	getch();
	return 0;
}
