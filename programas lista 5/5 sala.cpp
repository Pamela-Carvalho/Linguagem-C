#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i, j, cont;
	for(i=0; i<20; ++i)
	{
		printf("\ninsira os valores de A:");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<30; ++i)
	{
		printf("\ninsira os valores de B:");
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<50; ++i)
	{
		if(i<20)
		{
			c[i] = a[i];
		}
		else 
		c[i] = b[i];
	}
	
	for(i=0; i<50; ++i)
    	for(j=i+1; j<51; ++j)
    	{
	        if(c[i]<c[j])
	        {
	        	cont = c[i];
	        	c[i] = c[j];
	        	c[j] = cont;
			}
    	}
    	
    for(j=0; j<50; ++j)
    {
    	printf("\nos valores sao: %d", c[j]);
	}
	
	getch ();
	return 0;
    	
}
