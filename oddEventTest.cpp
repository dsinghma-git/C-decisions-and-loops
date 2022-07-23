//Write a program to input a number and display whether 
// it is odd or even.
#include<stdio.h>

int main()
{
	int n,r;
	printf("Enter a number:  ");
	scanf("%d", &n);
	r = n % 2; // finds remainder after dividing n by 2
	if(r==0)
	{
		printf("\n The number is even.");
	}
	else
	{
		printf("\n The number is odd.");
	}
	return 0;	
}

