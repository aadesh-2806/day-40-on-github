#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x,m,r;
	//clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	if(n%2==1)
	{
		x=1;
		r=(n+1)/2;
		while(x<=r)
		{
			i=1;
			while(i<=r-x)
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
			i=i-2;
			while(i>=1)
			{
				printf("*");
				i=i-1;
			}
			printf("\n");
			x=x+1;
		}
	
		x=(n-1)/2;
		while(x>=1)
		{
			i=1;
			while(i<=(n-1)/2-x+1)
			{
				printf(" ");
				i++;
			}
			i=1;
			while(i<=x)
			{
				printf("*");
				i++;
			}
			i=x-1;
			while(i>=1)
			{
				printf("*");
				i--;
			}
			printf("\n");
			x=x-1;
		}

	}
	else
	{
		x=1;
		r=(n)/2;
		while(x<=r)
		{
			i=1;
			while(i<=r-x)
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
			i=i-2;
			while(i>=1)
			{
				printf("*");
				i=i-1;
			}
			printf("\n");
			x=x+1;
		}
	
		x=(n)/2;
		while(x>=1)
		{
			i=1;
			while(i<=(n)/2-x)
			{
				printf(" ");
				i++;
			}
			i=1;
			while(i<=x)
			{
				printf("*");
				i++;
			}
			i=x-1;
			while(i>=1)
			{
				printf("*");
				i--;
			}
			printf("\n");
			x=x-1;
		}

	}
	getch();
 
}
