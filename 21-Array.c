#include<stdio.h>
/*11. Write aprogram to enter afiveelements usingArray andprintit onascreen.
*/

main()
{
	int i,n,marks[10];
	printf("\n enter number whose you print:");
	scanf("%d",&n);
	printf("\n elemnets before arrays %d",n);
	for(i=0;i<=n;i++)
	{
		
		scanf("%d",&marks[i]);
	}
	printf("\n arrays after to print:");
	for(i=0;i<=n;i++)
	{
		printf("\n after declared marks[%d]=%d",i,marks[i]);
	}
	printf("\n");
}
