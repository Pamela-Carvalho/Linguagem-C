#include<stdio.h>
#include<conio.h>

int main()
{
	int valor, a=0, resultado;
	printf("insira um valor para tabuada: ");
	scanf("%d", &valor);
	while(a<=10)
	{
		printf("\n %d x %d = %d ", valor, a, resultado=valor*a);
    a++;
	}
	
	getch ();
    return 0;
}
