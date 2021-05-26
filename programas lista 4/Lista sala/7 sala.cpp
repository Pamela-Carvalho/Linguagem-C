#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10], b[10], i, x;
	
	for(i=0; i<10; ++i)
	{
		printf("insira um valor:\n");
		scanf("%d", &a[i]);
		x=9-i;
		b[x]=a[i];
	}
	for(x=0; x<10; ++x)
	{
		printf("os valores sao: %d\n", b[x]);
	}
	
	getch ();
	return 0;
}
