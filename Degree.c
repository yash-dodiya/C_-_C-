#include<stdio.h>
main()
{
	float celcious,fahrenhiet;
	
	printf("\n enter celcious:");
	scanf("%f",&celcious);
	
	fahrenhiet=(celcious*1.8)+32;
	
	printf("%.2f celcious =%.2f fahrenhiet",celcious,fahrenhiet);
}
