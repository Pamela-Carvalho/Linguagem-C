#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[20], i, j, cont, pesq, x=0;
	
	for(i=0; i<20; ++i)
	{
		printf("\n insira os valores:");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<20; ++i)
	{
		b[i] = a[i] + 2;
	}
	
	for(i=0; i<20; ++i)
	    for(j=i+1; j<20; ++j)
	    {
	    	if(b[i]>b[j])
	    	{
	    		cont = b[i];
	        	b[i] = b[j];
	        	b[j] = cont;
			}
		}
		
	for(j=0; j<20; ++j)
	{
		printf("\nos resultados sao: %d", b[j]);
	}
		
	printf("\ninsira o valor desejado:");
	scanf("%d", &pesq);
	
	for(j=0; j<20; ++j)
	
		if(pesq==b[j] && x==0)
		{	
			printf("\nachei %d na posicao: %d", pesq, j);
			x=1;
		}
		else ++j;
		
	getch ();
	return 0;
}
