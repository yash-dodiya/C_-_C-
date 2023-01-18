#include<stdio.h>
/*
A12.Write aprogramto find outthe lengthof givenstringwithout using string function
*/

main()
{
	int i,length=0;
	char str[50];
	
	printf("\n enter a string:");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	printf(" length of the string(%s)=%d\n",str,length);
}
