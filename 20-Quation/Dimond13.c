#include<stdio.h>
/*
         ***********
         ****   ****
         ***     ***
         **       **
         *         *
         
*/

main()
{
	int i,j,k,z=2;
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		if(i!=1)
		{
			for(k=1;k<=z;k++)
			{
				printf(" ");
			}
			z=z+2;
		}
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
}         
