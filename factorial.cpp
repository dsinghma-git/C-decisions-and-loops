// Write a program to find factorial of given number
#include<stdio.h>

int main()
{
	int n,f=1;
	printf("Enter a number ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		f = f * i;
	}
	
	printf("\n Factorial of given number %d = %d",n,f);
	return 0;
}

