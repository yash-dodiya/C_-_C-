#include<stdio.h>
/*j. Write a program you have tomake a summation of first and last Digit. (E.g. 1234ans:-5)
*/
main()
{
	int num=0,firstdigit=0,lastdigit=0,sum=0;
	
	printf("\n enter number:");
	scanf("%d",&num);
	
	lastdigit=num%10;
	
	while(num>=10)
	{
		num=num/10;
	}
	firstdigit=num;
	
	sum=firstdigit+lastdigit;
	
	printf("\n sum of first and last digit= %d",sum);
}
