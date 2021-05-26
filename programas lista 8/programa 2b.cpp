#include<stdio.h>
#include<conio.h>

int mtzA();
int mtzB();
int juncao(int a[30], int b[30]);
int exibir(int c[60]);

int a[30], b[30], c[60];

int main()
{
   mtzA();
   mtzB();
   juncao(a, b);
   exibir(c);
   
   getch();
   return 0;
}

int mtzA()
{
    int i;
    
    for(i=0; i<30; ++i)
    {
        printf("Insira os valores de A:");
        scanf("%d", &a[i]);
    }
}

int mtzB()
{
    int i;
    
    for(i=0; i<30; ++i)
    {
        printf("Insira os valores de B:");
        scanf("%d", &b[i]);
    }
}

int juncao(int a[30], int b[30])
{
    int i;
    
    for(i=0; i<60; ++i)
    {
        if(i<30)
        {
            c[i] = a[i];
        }
        else
		c[i] = b[i-30];
    }
}

int exibir(int c[60])
{
    int i;
    
    for(i=0; i<60; ++i)
    {
        printf("\n %d", c[i]);
    }
}
