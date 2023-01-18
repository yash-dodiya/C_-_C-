#include<stdio.h>
/*e. Write aprogramyou haveto printthe Fibonacciseries upto usergivennumber
*/
main()
{
	int i,n;
	int f1=1,f2=0,f3=0;
	
	printf("\n enter n number whose you want to print number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("\n%d",f3);
		f3=f1+f2;
		f1=f2;
		f2=f3;
		
	}
}
