// Fibonacci sequence: 0, 1, 1, 2,3, 5, 8, 13,21, 34, 55 etc
#include<stdio.h>

int main()
{
	int n, a = 0, b = 1, c;
	printf(" Enter number of terms ");
	scanf("%d",&n);
	printf("\n The Fibonacci sequence is : \n");
	printf("%d\t%d",a,b);
	for(int i = 3;i<=n;i++)
	{
		c = a + b;
		printf("\t %d",c);
		a = b;
		b = c;
	}
	return 0;
	
}
