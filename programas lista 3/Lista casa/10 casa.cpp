#include<stdio.h>
#include<conio.h>

int main()
{
	char op;
	char sair;
	int a, b, c;
	do{
	printf("\n insira a operacao ou s para sair:");
	scanf("\n%c", &op);
	if (op=='s')
	{
        printf("fechando calculadora...");
    }
    else {
	printf("\n insira um valor para a:");
	scanf("\n%d", &a);
	printf("\n insira um valor para b:");
	scanf("\n%d", &b);

		switch(op)
		{
		case '+': printf("%d + %d = %d", a, b, c=a+b); break;
		case '-': printf("%d - %d = %d", a, b, c=a-b); break;
		case '*': printf("%d * %d = %d", a, b, c=a*b); break;
		case '/': printf("%d / %d = %d", a, b, c=a/b); break;
		default: printf("\n funcao invalida");
	}}}
	while (op != 's');
	 
	getch();
	return 0;
	
}
