  #include<stdio.h>
/*A6. Write a program to print the Matrixusing 2-D Array
*/
main()
{
	int i,a[3][3],j;
	
	printf("\n enter 9 elements form 3*3 matrix:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	
	printf("\n elements in matrix transpose form are:\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("\t%d",a[i][j]);
	}
	    printf("\n");
	}
	
}
