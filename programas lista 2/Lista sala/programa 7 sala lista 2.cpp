#include<stdio.h>
#include<conio.h>

int main()
{
	int a, x;
	printf("insira um valor:");
	scanf("%d", &a);
	if(a<0){
	x=(a*-1);
	printf("o valor positivo e: %.2d", x);
	}else
	printf("o valor e positivo: %.2d", a);
	
	getch();
    return 0;
	
}
