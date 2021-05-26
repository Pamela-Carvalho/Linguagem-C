#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a, b, c, delta, x1, x2;
	printf("insira o valor de a:");
	scanf("%f", &a);
	printf("insira o valor de b:");
	scanf("%f", &b);
	printf("insira o valor de c:");
	scanf("%f", &c);
	
	if(a!=0){
	delta=(b*b)-(4*a*c);
	if(delta<0)
	{printf("nao possui raiz");}
	else{
	
	if(delta==0){
	
	x1=((-b)/2*a);
	x2=x1;
	printf("a equacao tem duas raizes reais e iguais: %.2f %.2f", x1, x2);
	}else{
	
	x1=(-b+sqrt(delta))/2*a;
	x2=(-b-sqrt(delta))/2*a;
	printf("a equacao tem duas raizes reais e diferentes: %.2f %.2f", x1, x2);
}
}
    }else
    {printf("nao e uma equacao do segundo grau");}
	
	getch ();
	return 0;
	
}
