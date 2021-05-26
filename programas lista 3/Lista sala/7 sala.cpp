#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a, x;
	
	a=0;
	while(a<=15)
	{
		x=pow(3,a);
		printf("3 elevado a %d= %d\n", a, x);
		a++;
	}
	
	getch ();
	return 0;
}
