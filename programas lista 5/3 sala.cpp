#include<stdio.h>
#include<conio.h>

int main()
{
	int a[15], b[15], i, x, y, j, cont;
	
	for (i=0; i<15; ++i)
	{
		printf("\ninsira os valores:");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<15; ++i)
	{
	x=a[i];
	if (a[i]==1)
	{
		b[i]=1;
	}
	else{
	
			for (y = x-1 ; y>=1; y--)
			{
            x=x*y;
            b[i]=x;
            }
        }
	}
	
	for(i=0; i<15; ++i)
    for(j=i+1; j<16; ++j)
    {
	    if(b[i]>b[j])
	        {
	        	cont = b[i];
	        	b[i] = b[j];
	        	b[j] = cont;
			}
    	}
    	
    for(j=0; j<15; ++j)
    {
    	printf("\n o fatorial do numeros sao: %d", b[j]);
	}
	
	getch ();
	return 0;
}
