#include <stdio.h>

int main ()
{
   char charcater;
   scanf("%c",&charcater);
   
   if (charcater >= 'A' && charcater <= 'Z')
   {
         charcater = charcater + 32;
		 printf("Changed case is %c\n", charcater);
   }
   else if (charcater >= 'a' && charcater <= 'z')
   {
         charcater = charcater - 32; 
		printf("Changed case is %c\n", charcater);		 
   }
   else
   {
	   printf("Entered character is not an alphabet");
   }
  
   

   return 0;
}