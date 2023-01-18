#include<stdio.h>
/*Writeaprogram ofto find outthe Area of Triangle,RectangleandCircle using If Condition.(Must Be 
MenuDriven)
*/
main()
{
	float l,b,r,pi=3.14,h,base,s,area,ch;
	
	printf("\n 1-Area of rectangle:");
	printf("\n 2-Area of tringle:");
	printf("\n 3-Area of circle:");
	printf("\n 4-Area of square:");
	
	printf("\n enter your choice:");
	scanf("%f",&ch);
	
	if(ch==1)
	{
		printf("\n enter length:");
		scanf("%f",&l);
		printf("\n enter breagth:");
		scanf("%f",&b);
		area=l*b;
		printf("\n Area of rectangle is=%f",area);
		
	}
	else if(ch==2)
	{
		printf("\n enter height:");
		scanf("%f",&h);
		printf("\n enter base:");
		scanf("%f",&b);
		area=h*b*0.5;
		printf("\n Area of tringle is=%f",area);
	}
	else if(ch==3)
	{
		printf("\n enter redius:");
		scanf("%f",&r);
		area=pi*r*r;
		printf("\n Area of circle is=%f",area);
		
	}
	else if(ch==4)
	{
		printf("\n enter square:");
		scanf("%f",&s);
		area=s*s;
		printf("\n Area of square is=%f",area);
	}
	else
	{
		printf("\n tata bye bye:");
	}
	
	
}
