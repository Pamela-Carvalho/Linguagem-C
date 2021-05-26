#include<stdio.h>
#include<conio.h>

int main ()
{
	int a[4], b[4], c[4][2], i, j;
	
	for(i=0; i<4; ++i)
	{
		printf("\n insira os valores de A:");
		scanf("%d", &a[i]);
	}
	for(i=0; i<4; ++i)
	{
		printf("\n insira os valores de B:");
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<4; ++i)
	    for(j=0; j<2; ++j)
	    {
	    	if(j==0)
	    	{
	    		c[i][j] = a[i] * 2;
			}
			else
			    c[i][j] = b[i] - 5;
		}
		
	for(i=0; i<4; ++i)
	    for(j=0; j<2; ++j)
	    {
	    	printf("\n os resultados da matriz C: %d", c[i][j]);
		}
		
	getch ();
	return 0;	
}
