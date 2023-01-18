#include<stdio.h>
/*f. Write aprogramyouhave to printthe table of givennumber.
*/
main()
{
	int i,n;
	
	printf("\n enter n number whose you want to print number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n%d*%d=%d",n,i,n*i);
	}
}
