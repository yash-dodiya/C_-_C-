#include<stdio.h>
/*
Write a program toperform addition, subtraction, multiplication and division of two 
numbers usingFunction
*/
int nu1,nu2,ans;

Addition()
{
	int addition;
	ans=nu1+nu2;
	printf("\n addition of two number=%d",ans);
}
subtraction()
{
	int subtraction;
	ans=nu1-nu2;
	printf("\n subtraction of two number=%d",ans);
}
multiplication()
{
	int multiplication;
	ans=nu1*nu2;
	printf("\n multiplication of two number=%d",ans);
}
division()
{
	int division;
	ans=nu1/nu2;
	printf("\n division of two number=%d",ans);
}
modulation()
{
	int modulation;
	ans=nu1%nu2;
	printf("\n modulation of two number=%d",ans);
}

main()
{
	
	printf("\n enter number 1:");
	scanf("%d",&nu1);
	
	printf("\n enter number 2:");
	scanf("%d",&nu2);

	
	Addition();
	subtraction();
	multiplication();
	division();
	modulation();
}
