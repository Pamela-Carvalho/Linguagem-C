#include<stdio.h>
#include<conio.h>

int main()
{
	int n, chave;
	printf("digite um numero inteiro:");
	scanf("%d", &n);
	chave=20;
	if((n>=0)&&(n<=100))
	n=(n-chave);
	
	if(n<0)
	{n=(n*-1);
	printf("a distancia entre numero digitado e o numero chave e: %.2d", n);}
	else
	printf("numero digitado incorreto");
	getch();
	return 0;
}
