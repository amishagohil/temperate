#include<stdio.h>
#include<conio.h>

void main()
{

	int n,rem=0,rev,temp;
	clrscr();
	printf("enter the number =");
	scanf("%d",&n);

	temp=n;
	while(n>0)
	{
	  rev=n%10;
	  rem=(rem*10)+rev;
	  n=n/10;
	}
	if(temp==rem)
	{
	    printf("this is a palindrome");
	}
	else
	{
	    printf("this is not a palindrome");
	}

	getch();
}