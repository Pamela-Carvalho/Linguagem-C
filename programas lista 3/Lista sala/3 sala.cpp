   #include<stdio.h>
#include<conio.h>

int main()
{
    int valor, a, resultado;
    printf ("Digite o Valor da Tabuada: ");
    scanf ("%d", &valor);
    a=0;
    
    while ( a<=10)
    
    {
    printf("\n %d x %d = %d ", valor, a, resultado=valor*a);
    a++;
    }
    
    getch ();
    return 0;
}
