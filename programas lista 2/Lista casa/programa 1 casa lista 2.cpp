#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("insira um valor:");
	scanf("%d", &n);
	if(n%2==0)
	printf("o numero digitado e par");
	else
	printf("o numero digitado e impar");
	
	getch();
	return 0;
}
