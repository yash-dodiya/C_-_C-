#include<stdio.h>
/*
1
12
1 2 3
1 2 3 4
1 2 3 4 5
*/

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=6-i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("% d",j);
		}
		printf("\n");
	}
}
