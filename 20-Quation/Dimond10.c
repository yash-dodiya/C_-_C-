#include<stdio.h>

/*
        1
       4 4
      9 9 9
   16 16 16 16
  25 25 25 25 25
  
 */
 
main()
{
     int i,j,k=1;
	 
	 for(i=1;i<=5;i++)
	 {
	 	for(k=1;k<=6-1;k++)
	 	{
	 		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",i*i);
		}
		printf("\n");
		}	
}
  
  
