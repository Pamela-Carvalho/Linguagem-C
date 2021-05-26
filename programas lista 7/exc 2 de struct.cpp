#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    int menu, i, j;
    float cont;
    char pes[100];
    
    do{
        printf("\n 1.Cadastro \n 2.Lista de idosos aposentados \n 3.Lista de idosos em ordem decrescente de peso \n 4.Sair \n Escolha uma das opções:");
        scanf("%d", &menu);
        
        struct cad
        {
            char nome[100];
            int age;
            float peso;
        };
        
        struct cad x[10], aux;
        
        switch (menu)
        {
            case 1:
                //cadastro//
                for(i=0; i<=9; ++i)
                {
                    printf("Nome:");
                    fflush(stdin);
                    fgets(x[i].nome, 100, stdin);
                    
                    printf("Idade:");
                    fflush(stdin);
                    scanf("%d", &x[i].age);
                    
                    printf("Peso:");
                    fflush(stdin);
                    scanf("%f", &x[i].peso);
                }
                break;
                
            case 2:
                //aposentados//
                for(i=0; i<=9; ++i)
                {
                    if(x[i].age >=65)
                    {
                        puts(x[i].nome);
                        printf("\n %d", x[i].age);
                    }
                }
                break;
            case 3:
                //ordenação//
                for(i=0; i<=8; ++i)
                    for(j=i+1; j<=9; ++j)
                    {
                        if(x[i].peso < x[j].peso)
                        {
                            aux = x[i];
                            x[i] = x[j];
                            x[j] = aux;
                        }
                    }
                    
                    for(j=0; j<=9; ++j)
                    {
                        puts(x[j].nome);
                        printf("\n %d", x[j].peso);
                    }
                    break;
                }
            }      
            while(menu != 4);
            
            getch();
            return 0;
}
