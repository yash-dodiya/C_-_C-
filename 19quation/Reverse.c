#include<stdio.h>
/*Write aprogramto printthe numberin reverseorder.
*/
main()
{
	int num=0,rev=0;
	
	printf("\n enter number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	printf("\n reverse number is=%d",rev);
}
