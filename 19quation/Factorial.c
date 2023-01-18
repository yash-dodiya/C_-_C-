#include<stdio.h>
/*d.writeaprogramyouhaveto find the factorialof givennumber.
*/
main()
{
	long long int i,fact=1,n;
	
	printf("\n enter n number whose you want to print:");
	scanf("%lld",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial number is=%lld",fact);
	
}
