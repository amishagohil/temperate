#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n,fi1=0,fi2=1,nf;
	printf("enter number =");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
	     printf("%d\t",fi1);
	     nf=fi1+fi2;
	     fi1=fi2;
	     fi2=nf;

	}

	getch();
}