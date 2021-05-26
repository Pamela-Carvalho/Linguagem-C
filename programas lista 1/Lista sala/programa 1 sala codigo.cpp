#include<stdio.h>
#include<conio.h>

int main()
{
    float D, V, T, LU;
    printf("entre com tempo: ");
    scanf("%f", &T);
    printf("entre com velocidade: ");
    scanf("%f", &V);
    D=T*V;
    LU=D/12;
    printf("o total de litros usados e: %f", LU);
    
    getch();
    return 0;
}
