#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>

int cadastro();
int classificacao();
int correcao();
int pesquisa();
int listagem_aprovados();
int listagem_reprovados();

int i, j, menu;
struct alunos
{
	char nome[100];
	float N1, N2, media;
};
struct alunos x[20];

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	do
	{
		printf("1.Cadastro de alunos \n 2.Classificação alfabética \n 3.Correção de dados \n 4.Pesquisa \n 5.Listagem dos aprovados \n 6.Listagem dos reprovados \n 7.Sair \n \n Escolha uma das opções:");
		scanf("%d", &menu);
		
		switch(menu)
		{
			case 1: cadastro(); break;
			case 2: classificacao(); break;
			case 3: correcao(); break;
			case 4: pesquisa(); break;
			case 5: listagem_aprovados(); break;
			case 6: listagem_reprovados(); break;
		}
	}
	while (menu != 7);
	
	getch();
	return 0;
}

int cadastro()
{
	for(i=0; i<5; i++)
	{
		printf("Nome:");
		fflush(stdin);
		fgets(x[i].nome, 100, stdin);
		
		printf("Nota 1:");
		fflush(stdin);
		scanf("%f", &x[i].N1);
		
		printf("Nota 2:");
		fflush(stdin);
		scanf("%f", &x[i].N2);
		
		x[i].media = (x[i].N1 + x[i].N2)/2;
		
		printf("Média: %.2f \n\n", x[i].media);
	}
}

int classificacao()
{
	struct alunos aux;
	
	for(i=0; i<5; ++i)
	{
		for(j=i+1; j<5; ++j)
		{
			if(strcmp(x[i].nome, x[j].nome) > 0)
			{
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}
	
	printf("Os nomes ordenados são: \n");
	
	for(j=0; j<5; ++j)
	{
		puts(x[j].nome);
	}
}

int correcao()
{
	char pesq[100];
	
	printf("\n Nome desejado para alteração das informações:");
	fflush(stdin);
	fgets(pesq, 100, stdin);
	
	for(i=0; i<5; ++i)
	{
        if(strcmp(pesq, x[i].nome) == 0) break;
    }
    
    printf("Nome:");
    fflush(stdin);
    fgets(x[i].nome, 100, stdin);
    
    printf("Nota 1:");
    fflush(stdin);
    scanf("%f", &x[i].N1);
    
    printf("Nota 2:");
    fflush(stdin);
    scanf("%f", &x[i].N2);
    
    x[i].media = (x[i].N1 + x[i].N2)/2;
    
    printf("Média: %.2f", x[i].media);
}

int pesquisa()
{
	char pesq[100];
	
	printf("Nome desejado:");
	fflush(stdin);
	fgets(pesq, 100, stdin);
	
	for(i=0; i<5; ++i)
	{
		if(strcmp(pesq, x[i].nome) == 0)
		{
			puts(x[i].nome);
			printf("Média: %2.f \n\n", x[i].media);
		} 
	}
}

int listagem_aprovados()
{
    printf("APROVADOS \n ");
    
	for(i=0; i<5; ++i)
	{
		if(x[i].media >= 7)
		{
			puts(x[i].nome);
			printf("Média: %2.f \n\n", x[i].media);
		}
	}
}

int listagem_reprovados()
{
    printf("REPROVADOS \n ");
    			
	for(i=0; i<5; ++i)
	{
		if(x[i].media < 7)
		{
			puts(x[i].nome);
			printf("Média: %2.f \n\n", x[i].media);
		}
	}
}
