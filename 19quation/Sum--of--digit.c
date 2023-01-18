#include<stdio.h>
/*i. Write a program make a summation of given number(E.g. 1523 ans :-11)
*/
main()
{
	int num=0,sum=0,digit=0;
	
	printf("\n enter number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("\n sum of digit is= %d",sum);
}
