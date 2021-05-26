#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int menu, i, j;
	char pesq[10], alt[15];
	
	do{
		printf("1.Cadastro \n 2.Pesquisa por cor \n 3.Ordenação por modelo \n 4.Alteração por modelo \n 5.Sair \n Escolha uma das opções:");
		scanf("%d", &menu);
		//struct//
		struct carro{
			char car[15], cor[10];
			int placa;
			float valor;
		};
		
		struct carro x[5], aux;
		
		switch(menu){
			
			case 1:
				//cadastro//
				for(i=0; i<=4; ++i)
				{
					printf("Modelo:");
					fflush(stdin);
					fgets(x[i].car, 15, stdin);
					
					printf("Cor:");
					fflush(stdin);
					fgets(x[i].cor, 10, stdin);
					
					printf("Placa:");
					fflush(stdin);
					scanf("%d", x[i].placa);
					
					printf("Preço:");
					fflush(stdin);
					scanf("%f", x[i].valor);
				} break;
				
			case 2:
				//pesquisa por cor//
				printf("Cor do carro:");
				fflush(stdin);
				fgets(pesq, 10, stdin);
				
				for(i=0; i<=4; ++i)
				{
					if(strcmp(pesq, x[i].cor) == 0)
					{
						printf("Achei %s na posição %d", pesq, i);
					}
				} break;
				
			case 3:
				//ordenação por modelo//
				for(i=0; i<=4; ++i)
				{
					for(j=i+1; j<=4; ++j)
					{
						if(strcmp(x[i].car, x[j].car) >0 )
						{
							aux = x[i];
							x[i] = x[j];
							x[j] = aux;
						}
					}
				}
				printf("\n Os modelos ordenados:\n");
				for(j=0; j<=4; ++j)
				{
					puts(x[j].car);
				} break;
				
			case 4:
				//alteração por modelo//
				printf("Modelo desejado para alteração:");
				fflush(stdin);
				fgets(alt, 15, stdin);
				for(i=0; i<=4; ++i)
				{
					if(strcmp(alt, x[i].car) == 0) break;
				}
				    printf("Modelo:");
					fflush(stdin);
					fgets(x[i].car, 15, stdin);
					
					printf("Cor:");
					fflush(stdin);
					fgets(x[i].cor, 10, stdin);
					
					printf("Placa:");
					fflush(stdin);
					scanf("%d", x[i].placa);
					
					printf("Preço:");
					fflush(stdin);
					scanf("%f", x[i].valor);
		}
	}
	while(menu != 5);
	
	getch();
	return 0;
}
