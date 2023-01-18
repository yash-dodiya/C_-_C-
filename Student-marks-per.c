#include<stdio.h>

/*15.Write a program user enter the 5 subjects mark. You have to make a totaland find the percentage.
Percentage > 75 you have to print“Distinction”
Percentage > 60 and percentage <= 75 you have to print “Firstclass”
Percentage >50 and percentage <= 60 you have to print “Second class” Percentage > 35 and 
percentage <= 50 you have to print “Pass class” Otherwise print“Fail”
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
	
	if(per>75 && per<=100)
	{
		printf("\n distinction");
	}
	else if(per>60 && per<=75)
	{
		printf("\n you have first class:");
	}
	else if(per>50 && per<=60)
	{
		printf("\n you have to second class:");
	}
   else if(per>35 && per<=50)
    {
    	printf("\n you have to pass class:");
	}
	else
	{
		printf("\n you are fail:");
	}


}
