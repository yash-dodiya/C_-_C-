#include<stdio.h>
/*1.Write a program to entera tenelements using Array and make a summation of the numbers 
and average o
*/
main()
{
	int i,n,sum=0;
	int array[10];
	float average;
	
	printf("\n enter number:");
	scanf("%d",&n);
	
	printf("\n enter %d elements are:",n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	printf("\n arrays after to print:");
	for(i=0;i<=n;i++)
	{
		printf("\n%d",array[i]);
	}
	printf("\n sum of value i is= %d",sum);
	printf("\n average of arrays %0.2f",average);
}
