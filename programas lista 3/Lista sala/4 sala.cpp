#include<stdio.h>
#include<conio.h>

int main()
{
    int a=1, cont;
    printf("digite um numero menor ou igual a cinquenta: ");
    scanf("%d", &a);
    
	if(a<=50)
	 {
	 	while(a<=250)
	 	{
		 a=a*3;
		 printf("%d\n", a);
		}
	 }
	 else
	 printf("numero invalido");
    
    getch ();
    return 0;
}
