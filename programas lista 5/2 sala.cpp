#include<stdio.h>
#include<conio.h>

int main()
{
	int a[8], b[8], i, j, cont, v, x=0;
	for(i=0; i<8; ++i)
	{
		printf("\ninsira os valores:");
		scanf("%d", &a[i]);
		b[i] = a[i] * 5;
	}
	
	for(i=0; i<7; ++i)
    	for(j=i+1; j<8; ++j)
    	{
	        if(b[i]>b[j])
	        {
	        	cont = b[i];
	        	b[i] = b[j];
	        	b[j] = cont;
			}
    	}
    
	for(j=0; j<8; ++j)
	{
		printf("os valores ordenados sao: %d\n", b[j]);
	}
	
	printf("insira o valor desejado:");
	scanf("%d", &v);
	
	for(j=0; j<8; ++j)
	{
		if(v==b[j] && x==0)
		{	
			printf("achei %d na posicao: %d", v, j);
			x=1;
		}
		else ++j;
	}
		
	
	getch ();
	return 0;
}
