#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, resultado;
	int resto, n2;
	printf("insira a nota:");
	scanf("%f", &n1);
	n2=n1*10;
	resto=(n2%10);
	resultado=resto;
	if(resto>5)
	n1=n1-(resultado/10)+1;
	else
	n1=n1-(resultado/10);
	printf("a nota e: %.2f", n1);
	
	getch();
	return 0;
}
