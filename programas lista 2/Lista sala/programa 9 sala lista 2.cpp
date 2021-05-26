#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, c, d;
	printf("digite o primeiro valor:");
	scanf("%d", &a);
	printf("digite o segundo valor:");
	scanf("%d", &b);
	printf("digite o terceiro valor:");
	scanf("%d", &c);
	printf("digite o quarto valor:");
	scanf("%d", &d);
	if((a%4==0)||(a%5==0)||(b%4==0)||(b%5==0)||(c%4==0)||(c%5==0)||(d%4==0)||(d%5==0));
	if((a%4==0)||(a%5==0))
	printf("\nnumero divisivel por 4 ou por 5: %.2d", a);
	else
	printf("\nnumero nao divisivel por 4 ou por 5");
	
	if((b%4==0)||(b%5==0))
	printf("\nnumero divisivel por 4 ou por 5: %.2d", b);
	else
	printf("\nnumero nao divisivel por 4 ou por 5");
	
	if((c%4==0)||(c%5==0))
	printf("\nnumero divisivel por 4 ou por 5: %.2d", c);
	else
	printf("\nnumero nao divisivel por 4 ou por 5");
	
	if((d%4==0)||(d%5==0))
	printf("\nnumero divisivel por 4 ou por 5: %.2d", d);
	else
	printf("\nnumero nao divisivel por 4 ou por 5");
	
	getch();
	return 0;
}
