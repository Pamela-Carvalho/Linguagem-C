#include<stdio.h>
#include<conio.h>

int main()
{
    float C, F;
    printf("entre com a temperatura em fahrenheit: ");
    scanf("%f", &F);
    C=(((F-32)*5)/9);
    printf("a temperatura em celsius e: %f", C);
    
    getch();
    return 0;
}
