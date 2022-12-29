//6. Write a program to find the simple Interest.

#include<stdio.h>
main()
{
	int p,r,d,si;
	
	printf("\n enter principal amount:");
	scanf("%d",&p);
	
	printf("\n enter rate of interest:");
	scanf("%d",&r);
	
	printf("\n enter duration:");
	scanf("%d",&d);
	
	si=p*r*d/100;
	
	printf("\n simple interest of=%d",si);
}
