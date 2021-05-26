#include<stdio.h>
#include<conio.h>

int main()
{
    int cont, soma;
    soma=0;
    cont=1;
    do{ 
    soma= cont+soma;
    cont++;
    printf("\n%d", soma);}
    while(cont<=100);
    
    getch();
    return 0;
}
