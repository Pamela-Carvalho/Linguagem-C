#include<stdio.h>
#include<conio.h>

int main()
{
    float R, V, H;
    printf("entre com o raio: ");
    scanf("%f", &R);
    printf("entre com altura: ");
    scanf("%f", &H);
    V=R*R*3.14159*H;
    printf("o valor do volume e: %f", V);
    
    getch();
    return 0;
}
