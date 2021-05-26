#include<stdio.h>
#include<conio.h>
#include<locale.h>


int serie(int limite);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int limite;
	
	serie(limite);
	
	getch();
	return 0;
}

int serie(int limite)
{
	int a=0, b=1, c=0, d;
	
	printf("Qual o limite desejado?");
	scanf("%d", &limite);
	
	for(d=1; d<=limite; ++d)
	{
		if(d==1)
		{
			printf("%d\n", d);
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
			printf("%d\n", c);
		}
	}
}

