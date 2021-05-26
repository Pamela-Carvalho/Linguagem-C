#include<stdio.h>
#include<conio.h>

int main()
{
	int a[9], b[9], i;
	
	for(i=0; i<9; ++i)
	{
		printf("insira os numeros do RA inicial:\n");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<9; ++i)
	{
		b[0]=a[0];
		b[1]=a[1];
		b[2]=a[2];
		b[3]=a[3];
		b[4]=a[4];
		b[5]=a[8];
		b[6]=a[7];
		b[7]=a[6];
		b[8]=a[5];
	}
	
	for(i=0; i<9; ++i)
	{
		printf("a ordem do RA novo e: %d\n", b[i]);
	}
	
	getch ();
	return 0;
}
