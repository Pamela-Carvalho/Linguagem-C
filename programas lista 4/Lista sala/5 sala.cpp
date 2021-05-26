#include<stdio.h>
#include<conio.h>

int main()
{
	int a[20], b[30], c[50], i;
	

		for(i=0; i<20; ++i)
    	{
		printf("insira os valores do vetor A:\n");
    	scanf("%d", &a[i]);
    	}
    	
	    for(i=0; i<30; ++i)
    	{
 		printf("insira os valores do vetor B:\n");
		scanf("%d", &b[i]);
    	}
    
    	for(i=0; i<50; ++i)          
    	{
    		if(i<20)
			
    		c[i]=a[i];
    		
    		else
    		c[i]=b[i-20];
		printf("os valores sao: %d\n", c[i]);
    	}

	getch ();
	return 0;
}
