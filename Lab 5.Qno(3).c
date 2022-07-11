/*Using nested-if check whether the given number is within the range of 
500-1000. Write algorithm, flowchart and source code.*/

#include <stdio.h>

int main()
{
 int number;

 printf("Please Enter Your Number Here:\n");
 scanf("%d",&number);
	if (number >= 500 && number <= 1000 ) 
   { 
    printf("The given number is within the range of 500-1000."); 
    } 
  else 
   { 
    printf("The given number is not within the range of 500-1000.");
   }
 return 0;
}
