#include<stdio.h>
/*
A10.Write aprogramto find outthe Maxnumberfrom givenMatrix
*/
main()
{
	int i,j,a[3][3],max=0;
	
	printf("\n enter 9 elements form 3*3 matrix are:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	
	if(a[i][j]>max)
	{
		max=a[i][j];
	}
  }
}
	printf("\n elements in matrix are:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("\n%d",a[i][j]);
	}
	}
	printf("\n max of matrix are=%d",max);
}
