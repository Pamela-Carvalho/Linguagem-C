#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int cadastro();
int pesquisa();
int classificacao();
int alteracao();
int remocao();

	struct cad
		{
			char nome[100], end[100], email[50], tel[8];
		};
		
		struct cad x[5];

int menu, i, j;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	do
	{
		printf(" 1.Cadastro \n 2.Pesquisa \n 3.Classificação Alfabética \n 4.Alteração de Registro \n 5.Remoção \n 6.Sair \n\n Escolha uma das opções: ");
		scanf("%d", &menu);
		
		switch(menu)
		{
			case 1: cadastro(); break;
			case 2: pesquisa(); break;
			case 3: classificacao(); break;
			case 4: alteracao(); break;
			case 5: remocao(); break;
		}
		
	}
	while(menu != 6);
	
	getch();
	return 0;
}

	int cadastro()
		{
			for(i=0; i<=4; ++i)
			{
				printf("Nome:");
			    fflush(stdin);
			    fgets(x[i].nome, 100, stdin);
			    
			    printf("Endereço:");
			    fflush(stdin);
			    fgets(x[i].end, 100, stdin);
			    
			    printf("Email:");
			    fflush(stdin);
			    fgets(x[i].email, 50, stdin);
			    
			    printf("Telefone:");
			    fflush(stdin);
			    fgets(x[i].tel, 8, stdin);
			}
			
		}
			
		int pesquisa()
		{
			char pesq[100];
			struct cad aux;
			
			printf("Nome desejado:");
			fflush(stdin);
			fgets(pesq, 100, stdin);
			
			for(i=0; i<=4; ++i)
			{
				if(strcmp(pesq, x[i].nome) == 0)
				{
					printf("%s foi encontrado na posição %d", pesq, i);
				}
			}
		
		}
		
			int classificacao()
		{
            struct cad aux;
            
			for(i=0; i<=4; ++i)
			    for(j=i+1; j<=4; ++j)
			    {
			    	if(strcmp(x[i].nome, x[j].nome) > 0)
			    	{
			    		aux = x[i];
			    		x[i] = x[j];
			    		x[j] = aux;
					}
				}
				
				printf("Os nomes ordenados são: \n");
				for(j=0; j<=4; ++j)
				{
					puts(x[j].nome);
				}
			
		}
				
		int alteracao()
		{
			char pesq[100];
			
			printf("Nome desejado para alteração:");
			fflush(stdin);
			fgets(pesq, 100, stdin);
			
			for(i=0; i<=4; ++i)
			{
				if(strcmp(pesq, x[i].nome) == 0) break;
			}
			
			printf("Nome:");
			fflush(stdin);
			fgets(x[i].nome, 100, stdin);
			
			printf("Endereço:");
			fflush(stdin);
			fgets(x[i].end, 100, stdin);
			
			printf("Email:");
			fflush(stdin);
			fgets(x[i].email, 50, stdin);
			
			printf("Telefone:");
			fflush(stdin);
			fgets(x[i].tel, 8, stdin);
			
		}
		
		int remocao()
		{
            char pesq[100];
            
			printf("Nome desejado para remoção:");
			fflush(stdin);
			fgets(pesq, 100, stdin);
			
				for(i=0; i<=4; ++i)
			{
				if(strcmp(pesq, x[i].nome) == 0) break;
			}
			
			printf("Digite enter 4x");
			fgets(x[i].nome, 100, stdin);
			fgets(x[i].end, 100, stdin);
			fgets(x[i].email, 50, stdin);
			fgets(x[i].tel, 8, stdin);
		}
