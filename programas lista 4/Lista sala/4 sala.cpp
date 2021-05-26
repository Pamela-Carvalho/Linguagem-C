#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5], cont, b[5], c[10];
	

		for(cont=0; cont<5; ++cont)
    	{
		printf("insira os valores do vetor A:\n");
    	scanf("%d", &a[cont]);
    	}
    	
	    for(cont=0; cont<5; ++cont)
    	{
 		printf("insira os valores do vetor B:\n");
		scanf("%d", &b[cont]);
    	}
    
    	for(cont=0; cont<10; ++cont)          
    	{
    		if(cont<5)
			
    		c[cont]=a[cont];
    		
    		else
    		c[cont]=b[cont-5];
		printf("os valores sao: %d\n", c[cont]);
    	}

	getch ();
	return 0;
}
