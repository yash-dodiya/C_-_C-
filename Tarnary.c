#include<stdio.h>
/*Write a program to find the Max number from the given three number using 
Ternary Operato
*/

main()
{
	int nu1,nu2,nu3,max;
	
	printf("\n enter number 1:");
	scanf("%d",&nu1);
	
	printf("\n enter number 2:");
	scanf("%d",&nu2);
	
	printf("\n enter number 3:");
	scanf("%d",&nu3);
	
	max=(nu1>nu2 &&nu1>nu3)?(nu1):((nu2>nu3)?(nu2):(nu3));
	
	printf("\n maximum number is=%d",max);
}
