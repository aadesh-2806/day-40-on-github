#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x;
	//clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=n;
	while(x>=1)
	{
		i=1;
		while(i<=n-x)
		{
			printf(" ");
			i=i+1;
		}
		i=i-(n-x);
		while(i<=x)
		{
			printf("*");
			i=i+1;
		}
		printf("\n");
		x=x-1;
	}
	getch();

}
