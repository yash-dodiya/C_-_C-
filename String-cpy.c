#include<stdio.h>
/*
Write aprogramto copystringfromonestring to anotherstringwithout using string 
function

*/
main()
{
	char s1[200],s2[200],i;
	
	
	printf("\n enter a string:");
	scanf("%s",s1);
	
	
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	printf("\n before string copy s1=%s,s2=%s",s1,s2);
	printf("\n copy string is=%s\n:",s2);
}
