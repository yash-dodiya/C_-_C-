#include<stdio.h>
/*16. Write Program use switch statement. Display Monday toSunday
*/

main()
{
	int ch;
	
	printf("\n 1-monday:");
	printf("\n 2-tuesday:");
	printf("\n 3-wendnesday:");
	printf("\n 4-thursday:");
	printf("\n 5-friday:");
	printf("\n 6-saturday:");
	printf("\n 7-sunday:");
	
	printf("\n enter your choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		printf("\n 1-monday:");
		break;
			
		case 2:
        printf("\n 2-tuesday:");
		break;
		
		case 3:
		printf("\n 3-wendnesday:");
		break;
		
		case 4:
		printf("\n 4-thursday:");
		break;
		
		case 5:
		printf("\n 5-friday:");
		break;
		
		case 6:
		printf("\n 6-saturday:");
		break;
		
		case 7:
		printf("\n 7-sunday:");
		break;
		
		default:
		printf("\n tata bye bye:");
		break;			
	}
}
