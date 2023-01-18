#include<stdio.h>

/*
2. Write a program to make addition, Subtraction, Multiplication and Division 
of Two Numbers. 
*/

#include<stdio.h>

main()
{
    int a,b,c,d;
    c=1;

    printf("enter a first number:");
    scanf("%d",&a);
    printf("enter a last number:");
    scanf("%d",&b);

    while(c<=4)
    {
     printf("\n\n1.addition\n");
     printf("2.subtraction\n");
     printf("3.multiplication\n");
     printf("4.divison\n");
     printf("5.exit\n");
     printf("\n\ninput your choich:");
     scanf("%d",&c);

	    switch(c)
	    {
		case 1:
		d=a+b;
		printf("first+secound = %d\n",d);
		break;

		case 2:
		d=a-b;
		printf("first-secound = %d\n",d);
		break;

		case 3:
		d=a*b;
		printf("first*secound = %d\n",d);
		break;

		case 4:
		d=a/b;
		printf("first/secound = %d\n",d);
		break;

		default:
		printf("Tata bye bye...");
		break;
	      }
    }
}
