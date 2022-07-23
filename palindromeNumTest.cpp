// reverse of given number
// input = 121  output : palindrome
// input = 2122  output: not palindrome
#include<stdio.h>

int main()
{
	int n,rev=0,d,m;
	printf("Enter a number ");
	scanf("%d",&n);
	m = n;
	while(n>0)
	{
		d = n % 10;
	    rev = rev * 10 + d;
		n = n/10;
	}
	if(m==rev)
	{
		printf("\n Number is Palindrome.");
	}
	else
	{
		printf("\n Number is not Palindrome.");
	}
	return 0;
}
