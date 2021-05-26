#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
	int num, y;
	num=15;
	while(num<=200)
    {
        y=pow(num,2);
        printf("\n%d", y);
        num++;
    }

	getch ();
	return 0;
}
