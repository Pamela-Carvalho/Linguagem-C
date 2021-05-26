#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], b[5], c[5], i;
	
	for(i=0; i<5; ++i)
	{
		printf("insira os valores do vetor A:\n");
    	scanf("%d", &a[i]);
	}
	
	for(i=0; i<5; ++i)
	{
		printf("insira os valores do vetor B:\n");
    	scanf("%d", &b[i]);
	}
	
	for(i=0; i<5; ++i)
	{
		c[i]= a[i]-b[i];
	}
	for(i=0; i<5; ++i)
	{
		printf("os resultados sao: %d\n", c[i]);
	}
	
	getch ();
	return 0;
}

