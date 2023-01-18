#include <stdio.h>
#include <string.h>
/*
  A12.Write aprogramto find outthe lengthof givenstringwithout using string function

*/

main() {
   char s[100];
   int i;
   printf("Enter a string : ");
   scanf("%s",s);

  while (s[i]!='\0')
    {
      if(s[i] >= 'a' && s[i] <='z') {
         s[i] = s[i] -32;
      }
      i++;
   }
   printf("String in Upper Case = %s", s);
   return 0;
}

