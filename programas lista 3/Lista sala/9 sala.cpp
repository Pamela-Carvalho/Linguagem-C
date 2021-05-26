#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
	int n, m, c, x=0;
	printf("insira um valor de base: ");
	scanf("%d", &n);
	printf("insira um valor para o expoente: ");
	scanf("%d", &m);

    do{
    	c=pow(n,m);
    	printf("%d\n", c);
    	x++;
	}
	while(x<m);
	
	getch ();
	return 0;
}
