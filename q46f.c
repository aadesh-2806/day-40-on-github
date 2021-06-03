#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x,m;
	//clrscr();
	printf("Welcome\nEnter a value=");
	scanf("%d" ,&n);
	
	if(n%2==1)
	{
		x=1;
		m=(n+1)/2;
		while(x<=m)
		{
			i=1;
			while(i<=x)
			{
				printf("*");
				i=i+1;
			}
			printf("\n");
			x++;
		}
	
		x=(n-1)/2;
		while(x>=1)
		{
			i=1;
			while(i<=x)
			{
				printf("*");
				i=i+1;
			}
			printf("\n");
			x--;
		}
	}
	else
	{
		x=1;
		while(x<=n/2)
		{
			i=1;
			while(i<=((n/2)-x))
			{
				printf(" ");
				i=i+1;
			}
			i=1;
			while(i<=x)
			{
				printf("*");
				i=i+1;
			}
			printf("\n");
			x++;
		}
	
		x=n/2;
		while(x>=1)
		{
			i=1;
			while(i<=((n/2)-x))
			{
				printf(" ");
				i=i+1;
			}
			i=1;
			while(i<=x)
			{
				printf("*");
				i=i+1;
			}
			printf("\n");
			x--;
		}
	}
	getch();

}
