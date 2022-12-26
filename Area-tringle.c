//5. Write a program to find the Area of Triangle 

#include<stdio.h>
main()
{
	int h,b;
	float area;
	
	printf("\n enter height:");
	scanf("%d",&h);
	
	printf("\n enter base:");
	scanf("%d",&b);
	
	area=h*b*0.5;
	
	printf("\n area of tringle is=%f",area);
}
