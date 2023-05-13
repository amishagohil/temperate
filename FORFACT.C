#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n,fact=1;
	printf("enter number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    fact*=i;
	    printf("%d\t",i);
	}
	printf("fact =%d",fact);
	getch();
}