/*Write a program to check whether a user entered number is odd or even. 
Also write the algorithm, and draw the flowchart.*/

#include<stdio.h>

int main(){
	
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("The number %d is even.",n);
	}
	
	else{
		printf("The number %d is odd.",n);
	}
	return 0;
}
