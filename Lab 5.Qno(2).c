/*Check whether the number entered by a user is less than, greater than 
or equal to hundred using if-else if – else statement. Write the algorithm, 
flowchart and source code for the solution of this problem.*/

#include<stdio.h>

int main(){
	
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	if(n>100){
		printf("The number %d is greater than 100.",n);
	}
	else if(n<100){
		printf("The number %d is lesser than 100.",n);
	}
	else{
		printf("The number is equal to 100.");
	}
	return 0;
}
