#include<stdio.h>
#include<conio.h>

int main()
{
	int a[7], b[7], c[7][2], i, j;
	
	for(i=0; i<7; ++i)
	{
		printf("\ninsira os valores de A:");
		scanf("%d", &a[i]);
	}	
	for(i=0; i<7; ++i)
	{
		printf("\ninsira os valores de B:");
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<7; ++i)
	    for(j=0; j<2; ++j)
	    {
	    	if(j==0)
	    	{
	    		c[i][j] = a[i];
			}
			else 
			c[i][j] = b[i];
		}
		
	for(i=0; i<7; ++i)
	    for(j=0; j<2; ++j)
	    {
	    	printf("\nos valores sao: %d", c[i][j]);
		}
		
		getch ();
		return 0;
}

