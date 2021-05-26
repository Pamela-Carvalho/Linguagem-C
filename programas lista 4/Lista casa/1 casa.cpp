#include<stdio.h>
#include<conio.h>

int main()
{
	int rav[9], rac[9], i;
	
	for(i=1; i<=9; ++i)
	{
		printf("insira os numeros do RA gerado pelo virus:\n");
		scanf("%d", &rav[i]);	
	}
	
	for(i=0; i<9; ++i)
	{
		rac[0]=rav[1];
		rac[1]=rav[2];
		rac[2]=rav[8];
		rac[3]=rav[7];
		rac[4]=rav[5];
		rac[5]=rav[6];
		rac[6]=rav[3];
		rac[7]=rav[4];
		rac[8]=rav[9];
	}
	
	for(i=0; i<9; ++i)
	{
		printf("a ordem correta e: %d\n", rac[i]);
	}
	
	getch ();
	return 0;
}
