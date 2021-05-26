#include<stdio.h>
#include<conio.h>

int main()
{
	int curso;
	printf("insira o numero do curso (de 1 a 5):");
	scanf("%d", &curso);
	switch (curso) {
		case 1: printf("Curso escolhido: Engenharia"); break;
		case 2: printf("Curso escolhido: Edificacoes"); break;
		case 3: printf("Curso escolhido: Sistemas Eletricos"); break;
		case 4: printf("Curso escolhido: Turismo"); break;
		case 5: printf("Curso escolhido: Analise de Sistemas"); break;
		default: printf("invalido");
	}
	
	getch ();
	return 0;
}
