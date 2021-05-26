#include<stdio.h>
#include<conio.h>

int main()
{
	int cont=1, soma=0;
	do{
		cont++;
		if (cont%2==0){
		soma=cont+soma;
	
		printf("\n%d", soma);
	}}
	while(cont<=500);
	
	getch ();
	return 0;
}
