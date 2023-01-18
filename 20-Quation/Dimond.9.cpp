#include<stdio.h>
/*

        1
        2
        3
      4 5 6 
     7 8 9 10
   11 12 13 14 15
*/

main()
{
	int i,j,k,x=1,z=4;
	for(i=1;i<=6;i++)
	{
		if(i==1 || i==2 || i==3)
		{
			for(k=1;k<=6;k++)
			{
				printf(" ");
			}
		    for(j=i;j<=i;j++)
   		    {
			  printf("%d",x);
			  x++;
			}
			printf("\n");
	    }
		else
		{
			for(k=z;k>=1;k--)
			{
				printf(" ");
			}
			z=z-2;
			
			for(j=1;j<=i-1;j++)
			{
				printf("%d ",x);
				x++;	
			}
			printf("\n");
		}
	}
}
       
  
