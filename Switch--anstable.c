#include<stdio.h>
/*Write a Program of Addition, Subtraction ,Multiplication and Division using Switch case.(Must Be Menu
Driven)
*/
main()
{
	
	int i=1,nu1,nu2,ans,ch;
	do
	{
	
	printf("\n enter number 1:");
	scanf("\n%d",&nu1);
	printf("\n enter number 2:");
	scanf("\n%d",&nu2);
	
	printf("\n 1-Addition:");
	printf("\n 2-Subtraction:");
	printf("\n 3-Multiplication:");
	printf("\n 4-Division:");
	printf("\n 5-Modulation:");
	
	printf("\n enter your choice:");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
		ans=nu1+nu2;
		printf("\n Addition of two number=%d\n",ans);
		break;
		
        case 2:
		ans=nu1-nu2;
		printf("\n Subtraction of two number=%d\n",ans);
		break;
		
		case 3:
		ans=nu1*nu2;
		printf("\n modulation of two number=%d\n",ans);
		break;
		
		case 4:
		ans=nu1/nu2;
		printf("\n Division of two number=%d\n",ans);
		break;
		
		case 5:
		ans=nu1%nu2;
		printf("\n Modulation of two number=%d\n",ans);
		break;
 
		default:
		printf("\n tata bye bye:");
		break;
      }
    }


	while(i<5);

   
   }
 
