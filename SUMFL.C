#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int n,i=0,fd,ld;
	printf("enter number =");
	scanf("%d",&n);

	ld=n%10;
	while(n>=10)
	{
	     n=n/10;
	}
	fd=n;
	i=fd+ld;
	printf("sum fd+ld =%d",i);
	getch();
}
