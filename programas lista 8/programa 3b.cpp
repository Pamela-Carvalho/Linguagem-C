#include<stdio.h>
#include<conio.h>
#include<locale.h>

int matriza(int aux, int *a);
int matrizb(int aux, int *b);
int juntar(int aux, int *a, int *b,int cont, int *c);
int exibir(int cont, int *c);

int main()
{
	int a[30], b[30], c[60], aux, cont;
	
	matriza(30, a);
	matrizb(30, b);
	juntar(30, a, b, 60, c);
	exibir(60, c);
}

int matriza(int aux, int *a)
{setlocale(LC_ALL, "portuguese");
	int i;
	
	for(i=0; i<aux; ++i)
	{
		printf("Insira o %d° valor de A:", i+1);
		scanf("%d", &a[i]);
	}
}

int matrizb(int aux, int *b)
{setlocale(LC_ALL, "portuguese");
	int i;
	
	for(i=0; i<aux; ++i)
	{
		printf("Insira o %d° valor de B:", i+1);
		scanf("%d", &b[i]);
	}
}

int juntar(int aux, int *a, int *b,int cont, int *c)
{
	int i;
	
	for(i=0; i<cont; ++i)
	{
		if(i<aux)
		{
			c[i] = a[i];
		}
		else
		{
			c[i] = b[i - aux];
		}
	}
}

int exibir(int cont, int *c)
{setlocale(LC_ALL, "portuguese");
	int i;
	
	for(i=0; i<cont; ++i)
	{
		printf("\nO valor %d° é: %d", i+1, c[i]);
	}
}

