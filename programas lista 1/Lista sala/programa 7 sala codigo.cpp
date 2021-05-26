#include<stdio.h>
#include<conio.h>

int main()
{
	int C, NR_COELHOS;
	printf("insira o numero de coelhos: ");
	scanf("%d", &NR_COELHOS);
	C=(NR_COELHOS*70)/18+10;
	printf("o custo e: %d", C);
	
	getch();
	return 0;
}
