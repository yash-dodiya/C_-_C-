#include<stdio.h>
/*Write aprogramto sortthe array of 5elements
*/
main()
{
	int i,temp=0;
	int a[10],j[10];
	
	printf("\n how many elemets:");
	for(i=0;i<10;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
		{
			printf("\n%d",temp);
	
			temp=a[i]+a[j];
			a[i]+a[j];
			a[j]=temp;
	    }
		
	}
}
      printf("\n arrays after print:");
      for(i=0;i<10;i++)
      {
      	printf("\n%d",a[i]);
	  }
