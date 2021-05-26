#include<stdio.h>
#include<conio.h>
#include<locale.h>

int matrizA(int a[12]);
int matrizB(int b[12]);
int soma(int c[12]);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int c[12];

	soma(c);
}

int matrizA(int a[12])
{
	int i, j, aux;
	
	for(i=0; i<12; ++i)
	{
		printf("\n Insira o valor de A:", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<12; ++i)
	{
		for(j=i+1; j<12; ++j)
		{
			if(a[i] > a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
		}
	}
}

int matrizB(int b[12])
{
	int i, j, aux;
	
	for(i=0; i<12; ++i)
	{
		printf("\n Insira o valor de B:");
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<12; ++i)
	{
		for(j=i+1; j<12; ++j)
		{
			if(b[i] > b[j])
			{
				aux = b[i];
				b[i] = b[j];
				b[j] = aux;
			}
		}
	}
}

int soma(int c[12])
{
	int a[12], b[12];
	int i;
	
	matrizA(a);
	matrizB(b);
	
	for(i=0; i<12; ++i)
	{
		c[i] = a[i] + b[i];
	}
	
	for(i=0; i<12; ++i)
	{
		printf("\n Os resultados são: %d", c[i]);
	}
}

