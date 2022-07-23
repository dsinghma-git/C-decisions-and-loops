// sum of digits 
// input = 342  output = 9
#include<stdio.h>

int main()
{
	int n,s=0,d;
	printf("Enter a number ");
	scanf("%d",&n);
	
	while(n>0)
	{
		d = n % 10;
		s = s + d;
		n = n/10;
	}
	printf("\n Sum of the digits of number = %d",s);
	return 0;
}
