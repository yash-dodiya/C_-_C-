#include<stdio.h>
/*
    *
   **
  ***
 ****
 ****
    *
*/

main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
		for(k=i;k<4;k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
		
	for(i=1;i<=2;i++)
	{
		if(i==2)
		{
			for(k=1;k<=3;k++)
			{
			printf(" ");
			}
			printf("*");
		}
		else
		{
			for(j=i;j<=4;j++)
			{	
				printf("*");
			}
			printf("\n");
		}
	}
}  		

