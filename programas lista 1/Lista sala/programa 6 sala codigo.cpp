#include<stdio.h>
#include<conio.h>

int main()
{
    float P, V, Ta, Te;
    printf("entre com o valor: ");
    scanf("%f", &V);
    printf("entre com o valor da taxa: ");
    scanf("%f", &Ta);
    printf("entre com o tempo: ");
    scanf("%f", &Te);
    P=V+(V*(Ta/100)*Te);
    printf("o valor da prestacao e: %f", P);
    
    getch();
    return 0;
}                                                                                                                                                                                                           
