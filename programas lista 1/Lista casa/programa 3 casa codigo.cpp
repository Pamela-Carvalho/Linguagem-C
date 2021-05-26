#include<stdio.h>
#include<conio.h>

int main()
{
	float AP, LP, AA, LA, Q;
	printf("insira a altura da parede: ");
	scanf("%f", &AP);
	printf("insira a largura da parede: ");
	scanf("%f", &LP);
	printf("insira a altura do azulejo: ");
	scanf("%f", &AA);
	printf("insira a largura do azulejo: ");
	scanf("%f", &LA);
	Q=(AP*LP)/AA*LA;
	printf("a quantidade de azulejos necessaria e: %.2f", Q);
	
	getch();
	return 0;
}
