#include<stdio.h>
/*10. Write a Program to check the given number is Positive, Negative. 
*/

main()
{
	int i,num=0,pos=0,nag=0;
	
	printf("\n enter n number whose you want to print:");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n number is positive number=%d:",num);
	}
	else
	{
		printf("\n number is nagative number=%d:",num);
	}
}
