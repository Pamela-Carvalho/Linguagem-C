#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, media;
	printf("entre com a primeira nota:");
	scanf("%f", &n1);
	printf("entre com a segunda nota:");
	scanf("%f", &n2);
	printf("entre com a terceira nota:");
	scanf("%f", &n3);
	media=(n1+n2+n3)/3;
	if(media>=6.0)
	{printf("aprovado: %f", media);}
	else
	{printf("reprovado: %f", media);}
	
	getch();
	return 0;
	
}
