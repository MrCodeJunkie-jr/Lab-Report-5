/*10. Write a program to find the greatest among three integer variables 
using if-else as well as
logical statement.*/

#include<stdio.h>

int main(){
	int a,b,c;
 	printf ("Enter three integers : ");
 	scanf ("%d %d %d",&a, &b, &c);
 	if (a>b&&a>c){
 		printf("%d is the greatest integer",a);
	}
	  if(b>a&&b>c){
	 	printf("%d is the greatest integer",b);
	}
	 
	 else{ 
	 printf("%d is the greatest number",c);
	}
	
	return 0;
}

