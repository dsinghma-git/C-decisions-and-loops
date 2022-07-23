// write a program to find reverse of a number using function
#include<stdio.h>
int findrev(int n);

int main()
{
	int n,rev;
	printf("Enter a number ");
	scanf("%d",&n);
	rev = findrev(n);
	printf("\n Reverse of given number %d = %d",n,rev);
	return 0;
}

int findrev(int n)
{
	int r=0,d;
	while(n>0)
	{
		d = n %10;
		r = r * 10 +d;
		n = n/10;
	}
	return r;
}
