#include<stdio.h>
#include<conio.h>
#include<locale.h>

int juros(float *valor, float *taxa, int *tempo);

int main()
{
	setlocale(LC_ALL, "portuguese");
	float prest, val, tax;
	int tem;
	float *valor, *taxa;
	int *tempo;
	
	printf("Valor:");
	scanf("%f", &val);
	
	printf("Taxa a ser cobrada:");
	scanf("%f", &tax);
	
	printf("Dias em atraso:");
	scanf("%d", &tem);
	
	valor = &val;
	taxa = &tax;
	tempo = &tem;
	
	juros(valor, taxa, tempo);
}

int juros(float *valor, float *taxa, int *tempo)
{
	float prest;
	
	prest = *valor + (*valor *(*taxa/100) * *tempo);
	printf("%.2f\n", prest);
}
