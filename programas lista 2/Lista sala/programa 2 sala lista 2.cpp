#include<stdio.h>
#include<conio.h>

int main ()
{
	float n1, n2, media, exame;
	printf("entre com a primeira nota:");
	scanf("%f", &n1);
	printf("entre com a segunda nota:");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	if(media>=6.0)
	{printf("aprovado: %.2f", media);}
	else
	printf("entre com a nota de exame:");
	scanf("%f", &exame);
	media=media+exame;
	if(media>=5.0)
	{printf("aprovado: %.2f", media);}
	else
	{printf("reprovado: %.2f", media);}
	
	getch();
	return 0;
}
