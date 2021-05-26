#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int potencia(int result);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int result;
	
	potencia(result);
	
	getch();
	return 0;
}

int potencia(int result)
{
	int base, exp;
	
	printf("Insira o valor de base:");
	scanf("%d", &base);
	
	printf("Insira o valor do expoente:");
	scanf("%d", &exp);
	
	result = pow(base, exp);
	
	printf("O resultado é: %d", result);
}


