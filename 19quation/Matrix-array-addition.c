#include<stdio.h>

/*
A7. Write a program of two make Addition of two matrix using 2-D Array.
*/
main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	
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
		c[i][j]=a[i][j]*b[i][j];
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
   }
}
