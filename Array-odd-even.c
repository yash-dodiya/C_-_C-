#include<stdio.h>
/*Write aprogramto enter aten elements usingArray andfind outthe to countthe total 
number of odd and evennumber
*/
main()
{
	int i,array[10],odd=0,even=0,n;
	printf("\n enter number:");
	scanf("%d",&n);
	
	printf("\n enter elements are:",n);
	
	for(i=0;i<=n;i++)
	{
		scanf("\n%d",&array[i]);
	
		if(array[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
		printf("\n value of arrays are:");
		for(i=0;i<=n;i++)
		{
			printf("\n%d",array[i]);
		}
	
		printf("\n even number is =%d",even);
		printf("\n odumber is=%d",odd);
	
	
	
}
