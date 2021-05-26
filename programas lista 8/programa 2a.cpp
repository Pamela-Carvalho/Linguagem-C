#include<stdio.h>
#include<conio.h>
#include<locale.h>

int somatoria(int par);

int i, result = 0;

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int par;
    
    printf("Qual o valor limite?");
    scanf("%d", &par);
    somatoria(par);
}

int somatoria(int par)
{
    for(i=1; i<=par; ++i)
    {
        result = result + i;
        
        printf(" %d \n", result);
    }
    
    getch();
    return 0;
}
