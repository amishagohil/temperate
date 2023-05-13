#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int n,i=0;
	printf("enter number =");
	scanf("%d",&n);

	while(n>0)
	{
	     n/=10;
	     i+=1;
	}
	printf("%d",i);
	getch();
}