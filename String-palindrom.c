#include<stdio.h>
/*
Write aprogramto make stringreverseandcheckthe givenstringis palindromeornot 
without using stringfunction
*/

main()
{
	int i,flag=0,length=0,rev=0;
	char str[100];
	
	printf("\n enter a string:");
	scanf("%s",str);
 
 	
	length=strlen(str);
	
	for()
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length-i-1])
		{
			flag=1;
			break;
		}
		if(flag)
		{
			printf("\n string is not palindrom:");
		}
		else
		{
			printf("\n string is palindrom:");
		}
	}
}
