#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, c, d, e;
	printf("insira o primeiro valor:");
	scanf("%d", &a);
	printf("insira o segundo valor:");
	scanf("%d", &b);
	printf("insira o terceiro valor:");
	scanf("%d", &c);
	printf("insira o quarto valor:");
	scanf("%d", &d);
	printf("insira o quinto valor:");
	scanf("%d", &e);
	if((a>b)&&(a>c)&&(a>d)&&(a>e))
	printf("o maior numero e: %.2d", a);
	if((a<b)&&(a<c)&&(a<d)&&(a<e))
	printf("o menor numero e: %.2d", a);
	if((b>a)&&(b>c)&&(b>d)&&(b>e))
	printf("o maior numero e: %.2d", b);
	if((b<a)&&(b<c)&&(b<d)&&(b<e))
	printf("o menor numero e: %.2d", b);
	if((c>a)&&(c>b)&&(c>d)&&(c>e))
	printf("o maior numero e: %.2d", c);
	if((c<a)&&(c<b)&&(c<d)&&(c<e))
	printf("o menor numero e: %.2d", c);
	if((d>a)&&(d>b)&&(d>c)&&(d>e))
	printf("o maior numero e: %.2d", d);
	if((d<a)&&(d<b)&&(d<c)&&(d<e))
	printf("o menor numero e: %.2d", d);
	if((e>a)&&(e>b)&&(e>c)&&(e>d))
	printf("o maior numero e: %.2d", e);
	if((e<a)&&(e<b)&&(e<c)&&(e<d))
	printf("o menor numero e: %.2d", e);
	
	getch();
	return 0;
}
