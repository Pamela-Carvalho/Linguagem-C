#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], b[12], c[12], i, j, cont;
	for(i=0; i<12; ++i)
	{
		printf("\ninsira os valores de A:");
		scanf("%d", &a[i]);
	}
	for(i=0; i<12; ++i)
    	for(j=i+1; j<13; ++j)
    	{
	        if(a[i]>a[j])
	        {
	        	cont = a[i];
	        	a[i] = a[j];
	        	a[j] = cont;
			}
    	}
    	
    for(i=0; i<12; ++i)
    {
    	printf("\ninsira os valores de B:");
		scanf("%d", &b[i]);
	}
	for(i=0; i<12; ++i)
    	for(j=i+1; j<13; ++j)
    	{
	        if(b[i]>b[j])
	        {
	        	cont = b[i];
	        	b[i] = b[j];
	        	b[j] = cont;
			}
    	}
    	
    for(j=0; j<12; ++j)
    {
    	c[j] = a[j] + b[j];
	}
	for(j=0; j<12; ++j)
    	for(i=j+1; i<13; ++i)
    	{
	        if(c[i]<c[j])
	        {
	        	cont = c[j];
	        	c[j] = c[i];
	        	c[i] = cont;
			}
    	}
	
	for(i=0; i<12; ++i)
	{
		printf("\nos resultados sao: %d", c[i]);
	}
	
	getch ();
	return 0;
}
