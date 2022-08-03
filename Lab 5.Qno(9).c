/*Write a program to find the greatest among three integer variables 
using if-else-if-else.*/

#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Enter the value of a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b&&a>c){
		printf("%d is greater.",a);
	}
	else if(b>a&&b>c){
		printf("%d is greater.",b);
	}
	else if(c>a&&c>b){
		printf("%d is greater.",c);
	}
	else {
		printf("Given value are equal");
	}
	return 0;
}
