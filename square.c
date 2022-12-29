#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n enter start B:");
	scanf("%d",&b);
	printf("\n enter end C:");
	scanf("%d",&c);
	printf("\n number\t square\t cube\t");
	printf("\n");	
	for(a=b;a<=c;a++)
	{
		printf("\n%d\t%d\t%d\t",a,a*a,a*a*a);
	}
	
}
