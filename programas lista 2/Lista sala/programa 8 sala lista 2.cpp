#include<stdio.h>
#include<conio.h>

int main()
{
	int w, x, y, z;
	printf("digite o primeiro valor:");
	scanf("%d", &w);
	printf("digite o segundo valor:");
	scanf("%d", &x);
	printf("digite o terceiro valor:");
	scanf("%d", &y);
	printf("digite o quarto valor:");
	scanf("%d", &z);
	if((w%2==0)&&(w%3==0)||(x%2==0)&&(x%3==0)||(y%2==0)&&(y%3==0)||(z%2==0)&&(z%3==0));
	if((w%2==0)&&(w%3==0))
	{printf("numero divisivel por 2 e por 3: %.2d", w);}
	else
	printf("\nnumero nao divisivel por 2 e por 3");
	
	if((x%2==0)&&(x%3==0))
	{printf("\nnumero divisivel por 2 e por 3: %.2d", x);}
	else 
	printf("\nnumero nao divisivel por 2 e por 3");
	
	if((y%2==0)&&(y%3==0))
	{printf("\nnumero divisivel por 2 e por 3: %.2d", y);}
	else
	printf("\nnumero nao divisivel por 2 e por 3");
	
	if((z%2==0)&&(z%3==0))
	{printf("\nnumero divisivel por 2 e por 3: %.2d", z);}
	else
	{printf("\nnumero nao divisivel por 2 e por 3");}
	
	getch();
	return 0;
	
}
