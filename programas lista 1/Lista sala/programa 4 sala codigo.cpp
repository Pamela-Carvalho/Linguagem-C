#include<stdio.h>
#include<conio.h>

int main()
{
    float A, B, x;
    printf("entre com valor de A: ");
    scanf("%f", &A);
    printf("entre com valor de B: ");
    scanf("%f", &B);
    x=A;
    A=B;
    B=x;
    printf("o valor trocado: de A %f de B %f", A, B);
    
    getch();
    return 0;
}
