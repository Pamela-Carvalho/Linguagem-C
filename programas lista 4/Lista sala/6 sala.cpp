#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[8], b[8], i;
	
	for(i=0; i<8; ++i)
	{
		printf("insira os valores da matriz A:\n");
		scanf("%d", &a[i]);
	}
	for(i=0; i<8; ++i)
	{
		b[i]=pow(a[i],2);
	}
	for(i=0; i<8; ++i)
	{
		printf("os resultados sao: %d\n", b[i]);
	}
	
	getch ();
	return 0;
}
