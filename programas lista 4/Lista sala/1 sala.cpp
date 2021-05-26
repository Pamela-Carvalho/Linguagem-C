#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], cont, b[5];
	
	for(cont=0; cont<5; ++cont)
	{
		printf("insira os valores do vetor A:\n");
    	scanf("%d", &a[cont]);
	}
	for(cont=0; cont<5; ++cont)
	{
		b[cont]=a[cont]*3;
	}
	for(cont=0; cont<5; ++cont)
	{
		printf("os resultados sao: %d\n", b[cont]);
	}

	
	getch ();
	return 0;
}
