#include<stdio.h>

main()
{
	void factorial(int);
	int i,n;
	
	printf("\n enter number:");
	scanf("%d",&n);
	
	factorial(n);
}
void factorial(int m)
{
	int i,fact=1;
	for(i=1;i<=m;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial number is= %d",fact);
}
	
	

