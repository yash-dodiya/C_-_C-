#include<stdio.h>

/*
A20. Write a program to print theFibonacci series using function

*/
main()
{
	void fibonacci(int);
	int n;
	printf("\n enter n number:");
	scanf("%d",&n);
	
	fibonacci(n);
}

    void fibonacci(int m)
    {
    	int i,f1=1,f2=0,f3=0;
    	for(i=1;i<=m;i++)
    	{
    		printf("\n%d",f3);
    		f3=f1+f2;
    		f1=f2;
    		f2=f3;
		}
	}
