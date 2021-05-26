#include<stdio.h>
#include<conio.h>
#include<locale.h>

int soma(int *lim);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int par;
	int *lim;
	
	printf("Qual o valor limite?");
	scanf("%d", &par);
	lim = &par;
	
	soma(lim);
	
	getch();
	return 0;
}

int soma(int *lim)
{
	int i, result=0;
	
	for(i=1; i<=*lim; ++i)
	{
		result = result + i;
		printf("%d\n", result);
	}
}

