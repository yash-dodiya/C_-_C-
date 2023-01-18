#include<stdio.h>
/*
A18. Write a program tofind out the Square and cube of given number using function 
*/
int n;

square()
{
	int squ;
	squ=n*n;
	printf("\n squre is:%d",squ);
}

cube()
{
	int cub;
	cub=n*n*n;
	printf("\n cube is:%d",cub);
}

main()  
{  
   printf("enter number:");
   scanf("%d",&n);
   
   square();
   cube();
}
