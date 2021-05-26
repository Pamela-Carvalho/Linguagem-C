#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main ()
{
    setlocale (LC_ALL, "portuguese");
    int menu, i, j;
    char pes[100], pesq[100];
    
    while(menu != 5)
    {
        printf("1.Cadastro e registros \n 2.Pesquisa de resgistro \n 3.Classificação alfabética \n 4.Alteração de registro \n 5.Sair \n escolha uma das opções: ");
        scanf("%d", &menu);
       
        struct cad{
        char nome[100], end[100], tel[8];
        int age;};
        
        struct cad x[5], aux;
            
        switch (menu){
            case 1:
            //cadastro// 
            for(i=0; i<=4; ++i)
            {
                fflush(stdin);
            printf("Nome %i:", i);
            fflush(stdin);
            fgets(x[i].nome, 100, stdin);
            
            printf("Endereço:");
            fflush(stdin);
            fgets(x[i].end, 100, stdin);
            
            printf("Idade:");
            fflush(stdin);
            scanf("%d", &x[i].age);
            
            printf("Telefone:");
            fflush(stdin);
            fgets(x[i].tel, 8, stdin);
            } 
            break;
            
            case 2:
            //pesquisa//
            fflush(stdin);
            printf("Nome desejado:");
            fgets(pesq, 100, stdin);
            for(i=0; i<=4; ++i)
            {
                if(strcmp(pesq, x[i].nome) == 0)
				{
					printf("achei na posição %d \n", i);
                }
            }
            break;
            
            case 3:
            //classificação alfabética//
            for(i=0; i<=4; ++i){
			
                for(j=i+1; j<=4; ++j){
			
                if(strcmp(x[i].nome, x[j].nome) > 0)
                {
                    aux = x[i];
                    x[i] = x[j];
                    x[j] = aux;
                }}}
                
                /*saída de dados*/
                
                printf("Os nomes ordenados: \n");
                
            for(j=0; j<=4; ++j)
            {
                 puts(x[j].nome);
            }
            break;
            
            case 4:
            //alteração//
            fflush(stdin);
            printf("Nome desejado para alteração:");
            fgets(pes, 100, stdin);
            for(i=0; i<=4; ++i)
            {
                if(strcmp(pes, x[i].nome) == 0) break;
            }
                fflush(stdin);
                printf("Nome:");
                fgets(x[i].nome, 100, stdin);
                fflush(stdin);
                printf("Endereço:");
                fgets(x[i].end, 100, stdin);
                fflush(stdin);
                printf("Idade:");
                scanf("%d", &x[i].age);
                fflush(stdin);
                printf("Telefone:");
                fgets(x[i].tel, 8, stdin);
            
        }}
      
      getch ();
      return 0;      
}
