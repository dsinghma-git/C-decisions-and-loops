// Write a program to generate first n odd terms
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number ");
	scanf("%d",&n);
	int i =1;
	int k =1;
	while(i<=n)
	{
		printf("\t %d",k);
		k = k + 2;
		i++;
	}
	return 0;
}
