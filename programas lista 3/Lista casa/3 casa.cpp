#include<stdio.h>
#include<conio.h>

int main ()
{
	int a;
	a=1;
	while (a<=20)
	{
	if(a%2==0)
	{printf("\n%d par", a);
	}else 
	printf("\n%d impar", a);
	a++;}
	getch();
	return 0;
}
	
	
