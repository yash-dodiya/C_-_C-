#include<stdio.h>
/*
  A16.Write aprogramcoconcatenatethe two stringwithoutusing stringfunction

*/
main()
{
	int i=0,j=0;
	char str1[100],str2[100];
	
	printf("\n enter a string 1:");
	scanf("%s",str1);
	printf("\n enter a string 2:");
	scanf("%s",str2);
	
    while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	
	str1[i]='\0';
	
	printf("\n concanate to string is=%s ",str1);
}
