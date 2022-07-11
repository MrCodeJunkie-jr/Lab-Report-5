/*Using if –statement, write an algorithm, flowchart, and source code to 
check whether a userdefined integer number is greater than 100.*/

#include<stdio.h>

int main(){
	
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	if(n>100){
		printf("The number %d is greater than 100.",n);
	}
	
	else{
		printf("The number %d is less than 100.",n);
	}
	return 0;
}

