// switch demo
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, s,d, p, q, ch;
	
	while(1)
	{
	printf("\n MENU \n");
	printf("-------------\n");
	printf("1.ADD\n");
	printf("2.SUBTRACT\n");
	printf("3.MULTIPLY\n");
	printf("4.DIVIDE\n");
	printf("5.EXIT\n");	
	printf("-------------\n");
	printf("\n Enter your choice (1-5)?  ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n Enter two numbers: ");
			scanf("%d%d",&a,&b);
			s = a + b;
			printf("\n Sum = %d",s);
			break;
		case 2:
			printf("\n Enter two numbers: ");
			scanf("%d%d",&a,&b);
			d = a - b;
			printf("\n Difference = %d",d);
			break;
		case 3:
			printf("\n Enter two numbers: ");
			scanf("%d%d",&a,&b);
			p = a * b;
			printf("\n Product = %d",p);
			break;
		case 4:
			printf("\n Enter two numbers: ");
			scanf("%d%d",&a,&b);
			q = a/b;
			printf("\n Quotient = %d",q);
			break;
		case 5:
			exit(0);
		default:
			printf("\n Invalid Choice !");
	 } // end of switch
   }// end of while
	return 0;
} // end of main
