#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[30], b[30], i, pesq, x=0;

	for(i=0; i<30; ++i)
	{
		printf("\n insira os valores:");
		scanf("%d", &a[i]);
	}
		
	for(i=0; i<30; ++i)
	{
		b[i] = pow(a[i],3);
	}
	
	for(i=0; i<30; ++i)
	{
		printf("\nos resultados sao: %d", b[i]);
	}
	
	printf("\ninsira o valor desejado:");
	scanf("%d", &pesq);
	
	for(i=0; i<30; ++i)
	
		if(pesq==b[i] && x==0)
		{	
			printf("\nachei %d na posicao: %d", pesq, i);
			x=1;
		}
		else ++i;
	
	
	getch ();
	return 0;

}
