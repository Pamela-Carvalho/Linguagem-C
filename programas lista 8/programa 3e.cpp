#include<stdio.h>
#include<conio.h>
#include<locale.h>

int mtza(int aux, int *a);
int mtzb(int aux, int *b);
int mais(int aux, int *a, int *b, int *c);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int a[12], b[12], c[12], aux=12;
	
	mtza(aux, a);
	mtzb(aux, b);
	mais(aux, a, b, c);
	
	getch();
	return 0;
}

int mtza(int aux, int *a)
{
	int i, j;
	
	for(i=0; i<aux; ++i)
	{
		printf("Insira o valor %d° de A:", i);
		scanf("%d", &a[i]);
	}

	int auxi;
	for(i=0; i<aux-1; ++i)
	{
		for(j=i+1; j<aux; ++j)
		{
			if(a[i] > a[j])
			{
				auxi = a[i];
				a[i] = a[j];
				a[j] = auxi;
			}
		}
	}
	
	for(j=0; j<aux; ++j)
	{
		printf("%d\n", a[j]);
	}
}

int mtzb(int aux, int *b)
{
	int i, j;
	
	for(i=0; i<aux; ++i)
	{
		printf("Insira o valor %d° de B:", i);
		scanf("%d", &b[i]);
	}
	
	int auxi;
	for(i=0; i<aux; ++i)
	{
		for(j=i+1; j<aux; ++j)
		{
			if(b[i]>b[j])
			{
				auxi = b[i];
				b[i] = b[j];
				b[j] = auxi;
			}
		}
	}
	for(j=0; j<aux; ++j)
	{
		printf("%d\n", b[j]);
	}
}

int mais(int aux, int *a, int *b, int *c)
{
	int i;
	
	for(i=0; i<aux; ++i)
	{
		c[i] = a[i] + b[i];
	}
	
	for(i=0; i<aux; ++i)
	{
		printf("\n Os resultado são: %d\n", c[i]);
	}
}
