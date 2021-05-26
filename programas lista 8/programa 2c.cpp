#include<stdio.h>
#include<conio.h>
#include<locale.h>

int juros(float prest, float valor, float taxa, int tempo);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float prest, valor, taxa;
	int tempo;
	
	juros(prest, valor, taxa, tempo);

	getch();
	return 0;
}

int juros(float prest, float valor, float taxa, int tempo)
{
	printf("Valor:");
	scanf("%f", &valor);
	
	printf("Taxa a ser cobrada:");
	scanf("%f", &taxa);
	
	printf("Dias em atraso:");
	scanf("%d", &tempo);
	
	prest = valor + (valor * (taxa / 100) * tempo);
	printf("%.2f", prest);
}
