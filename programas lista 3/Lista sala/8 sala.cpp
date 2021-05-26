#include<stdio.h>
#include<conio.h>

int main ()
{
	int a=0, b=1, c=0, d;
	for(d=1; d<=15; d++)
	{
		if(d==1)
		{printf("%d\n", b);}
		else {
			c=a+b;
			a=b;
			b=c;
			printf("%d\n", c);
		}
	}
	
	getch ();
	return 0;
 } 
