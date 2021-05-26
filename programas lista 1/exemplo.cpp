#include<stdio.h>
#include<conio.h>

int main()
{
	float N1, N2, media;
	printf("entre com primeira nota: ");
	scanf("%f", &N1);
	printf("entre com segunda nota: ");
	scanf("%f", &N2);
	media=(N1+N2)/2;
	printf("a media e: %.2f", media);
	
	getch();
	return 0;
	
}
