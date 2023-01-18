#include<stdio.h>
/*Write a program to calculate sum of 5 subjects & find the percentage. Subject 
marks entered by user.
*/

main()
{
	int maths,ss,sci,guj,eng,per,total;
	
	printf("\n enter maths marks:");
	scanf("%d",&maths);
	
	printf("\n enter ss marks:");
	scanf("%d",&ss);
	
	printf("\n enter science marks:");
	scanf("%d",&sci);
	
	printf("\n enter gujrati marks:");
	scanf("%d",&guj);
	
	printf("\n enter eng marks:");
	scanf("%d",&eng);
	
	total=maths+ss+sci+guj+eng;
	printf("\n total of all subject marks=%d",total);
	
	per=total/5;
	printf("\n persontage of student marks=%d",per);
}
