#include<stdio.h>
#include<conio.h>

int main()
{
	float sb, sl, h, ad;
	printf("insira o salario bruto:");
	scanf("%f", &sb);
	printf("insira as horas trabalhadas:");
	scanf("%f", &h);
	if(h>160){	
	h=(h-160);
	ad=(sb/160)+(h*0.50);
	sb=(ad+sb);
	}

	if((sb<800.00)){
			sl=sb;
	printf("o salario liquido e: %.2f", sl);
	}


    else
	if((800.00>=sb)&&(sb<=1600.00)){
			sl=sb-(8/100*sb)-(5/100*sb);
	printf("o salario liquido e: %.2f", sl);
	}

 
    else
{
		sl=sb-(15/100*sb)-(7/100*sb);
	printf("o salario liquido e: %.2f", sl);
}

	
	getch();
	return 0;
}
