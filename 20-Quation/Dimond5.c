#include<stdio.h>
/*
         1
       2 1
     3 2 1
   4 3 2 1
 5 4 3 2 1
*/

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		    printf("\n");
		}
}

