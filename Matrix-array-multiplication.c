#include<stdio.h>
/*
  A9.Write aprogramof Multiplication makeSubtraction oftwo matrix using2-DArray. 

*/
main()
{
	int i,j,k,a[3][3],b[3][3],c[3][3];
	
	printf("\n enter 9 elements form 3*3 matrix A:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("\n elements in matrix A are:\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("\t%d",a[i][j]);
	}
	    printf("\n");
	}
	
	printf("\n enter 9 elements form 3*3 matrix B:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
	}
	}
	printf("\n elements in matrix B are:\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("\t%d",b[i][j]);
	}
	    printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		c[i][j]=0;
		for(k=0;k<3;k++)
		{
			 c[i][j]=a[i][k]*b[k][j];
	
		}
   	}
	
  }
     printf("\n sum of matrix c\n:");
     for(i=0;i<3;i++)
     {
     	printf("\n\n");
     	for(j=0;j<3;j++)
	 {
        printf("\t%d",c[i][j]);		 	
	 }
	 printf("\n");
   }
}
