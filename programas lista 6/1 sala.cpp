#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5][3], b[5][3], c[5][3], i, j;
	
	for(i=0; i<5; ++i)
	    for(j=0; j<3; ++j)
		{
			printf("\ninsira a matriz A:");
			scanf("%d", &a[i][j]);
			printf("\ninsira a matriz B:");
			scanf("%d", &b[i][j]);
		} 
		
	for(i=0; i<5; ++i)
	    for(j=0; j<3; ++j)
	    {
	    	c[i][j] = a[i][j] + b[i][j];
		}
		
	for(i=0; i<5; ++i)
	    for(j=0; j<3; ++j)
	    {
	    	printf("\n a matriz C: %d", c[i][j]);
		}
		
	getch ();
	return 0;
}
