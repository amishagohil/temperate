#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int i,n,pr=0;
	printf("enter number =");
	scanf("%d",&n);

	if(n==0||n==1)
	 pr=1;
	for(i=2;i<=n/2;i++)
	{
	    if(n%i==0)
	    {
		pr=1;
	    }
	}
	if(pr==0)
	{
	    printf("%d is a prime number",n);
	}
	else
	{
	     printf("%d isnot a prime number",n);
	}
	getch();
}