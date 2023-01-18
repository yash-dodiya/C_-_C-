#include<stdio.h>
/*Operator
*/
main()
{
	int nu1,nu2,ans;
	
	printf("\n enter number 1:");
	scanf("%d",&nu1);
	
	printf("\n enter number 2:");
	scanf("%d",&nu2);
	
	ans=nu1+=nu2;
	printf("\n Addition of two number= %d\n",ans);
	
	ans=nu1-nu2;
	printf("\n Subtraction of two number= %d\n",ans);
	
	ans=nu1*nu2;
	printf("\n Multiplication of two number= %d\n",ans);
	
	ans=nu1/nu2;
	printf("\n Division of two number= %d\n",ans);
	
	ans=nu1%nu2;
	printf("\n Modulation of two number= %d\n",ans);
	
}
