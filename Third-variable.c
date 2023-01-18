#include<stdio.h>
/*9. Write a Program to show swap of two No's without using third variable.
*/

main()
{
	int a=10,b=10;
	printf("\n enter a number:");
	scanf("%d",&a);
	
	printf("\n enter number b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n after swap numbera=%d\n b=%d\n",a,b);
	
	
	
}
