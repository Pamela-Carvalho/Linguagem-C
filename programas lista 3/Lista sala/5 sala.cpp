#include<stdio.h>
#include<conio.h>

int main ()
{
	int cont;
	cont=1;
	while(cont<200)
	{
		if(cont%4==0)
		{printf("\n%d", cont);}
		cont++;
	}
	
	getch ();
	return 0;
}
