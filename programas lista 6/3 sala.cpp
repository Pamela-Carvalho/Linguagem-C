#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[10], b[10][3], i, j, x, y;
	
	for(i=0; i<10; ++i)
	{
		printf("insira os valores de A:");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<10; ++i)
	    for(j=0; j<3; ++j)
	    {
	    	if(j==0)
	    	{
	    		b[i][j] = a[i] + 5;
			}
			else
			{
				if(j==1)
				{
					x=a[i];
					if(a[i]==1)
		        		{
		        			b[i][j]=1;
						}
						else
						{
				        	for (y = x-1 ; y>=1; y--)
		                	{
                                x=x*y;
				            	b[i][j] = x;
			            	}
			            }
		    	}
		    	else
		    	b[i][j] = pow(a[i],2);
	    	}
	    }
	    
	for(i=0; i<10; ++i)
	    for(j=0; j<3; ++j)
		{
	        printf("\nos resultados da matriz B sao: %d", b[i][j]);
		}
			
	 getch ();
	 return 0;
}
