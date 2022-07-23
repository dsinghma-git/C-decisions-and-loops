// to find sum of the series: 1/1^2 + 1/3^2 + 1/5^2 + ... 
// upto 10 terms
#include<stdio.h>

int main()
{
	int i;
	float s=0;
	int k = 1;
	for(i=1;i<=10;i++)
	{
		s = s + 1.0/(k*k);
		k = k + 2;
	}
	printf("\n Sum of the series = %f",s);
	return 0;
}
