#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6], b[6], i, y, x;
	
	for(i=0; i<6; ++i)
	{
		printf("insira os valores da matriz A:\n");
		scanf("%d", &a[i]);	
	}
	for(i=0; i<6; ++i)
	{
	x=a[i];
	if (a[i]==1){
		b[i]=1;
	}
	else{
	
			for (y = x-1 ; y>=1; y--){
            x=x*y;
            b[i]=x;
            }
}
	}
	
	for(i=0; i<6; ++i)
	{
		printf("os resultados sao: %d\n", b[i]);
	}
	
	getch ();
	return 0;
}
