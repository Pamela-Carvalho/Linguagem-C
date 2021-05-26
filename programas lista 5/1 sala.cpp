#include<stdio.h>
#include<conio.h>

int main()
{
	int a[12], i, j, cont;
	for(i=0; i<12; ++i)
	{
		printf("insira os numeros desordenados:\n");
		scanf("%d", &a[i]);
    }
    for(i=0; i<12; ++i)
    
		for(j=i+1; j<13; ++j)
	    {
		    if(a[j]>a[i])
		    {
			    cont = a[i];
			    a[i] = a[j];
			    a[j] = cont;
		    }
        }
    for(j=0; j<12; ++j)
    {
    	printf("\n os valores ordenados sao: %d", a[j]);
	}
	
	getch ();
	return 0;
}
