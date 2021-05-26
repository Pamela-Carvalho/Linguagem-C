#include<stdio.h>
#include<conio.h>

int main()
{
	int notas[40], i, j, cont, pesq, x=0;
	
	for(i=0; i<40; ++i)
	{
		printf("\n insira a notas dos alunos:");
		scanf("%d", &notas[i]);
	}

			
	for(i=0; i<39; ++i)
	    for(j=i+1; j<40; ++j)
	    {
	    	if(notas[i]>notas[j])
	    	{
	    		cont = notas[i];
	    		notas[i] = notas[j];
	    		notas[j] = cont;
			}
		}
		
	for(j=0; j<40; ++j)
	{
		printf("\nas notas em ordem decrescente sao: %d", notas[j]);
	}
	
	printf("\nqual a nota desejada?: ");
	scanf("%d", &pesq);
	
	for(j=0; j<40; ++j)
	    if(pesq==notas[j] && x==0)
	    {
	    	printf("achei a nota %d na posicao: %d", pesq, j);
	    	x=1;
		}
		else ++j;
		
	getch ();
	return 0;
}
