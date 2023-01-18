#include<stdio.h>
main()
{
    int bdate,age;
    char name[20],address[20];
   
	
    
    printf("\n enter your name:");
    scanf("%s",&name);
    
    printf("\n enter your Birth-day date:");
    scanf("%d",&bdate);
    
    printf("\n enter your age:");
    scanf("%d",&age);
    
    printf("\n enter your address:");
    scanf("%s",&address);

    printf("\n your name is=%s",name);
    printf("\n your birhday date is=%d",bdate);
    printf("\n your age is=%d",age);
    printf("\n your address is=%s",address);

}
