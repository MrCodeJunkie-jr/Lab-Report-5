/*Write a program to check if there is profit or loss for the user defined 
cost price and selling price*/

#include <stdio.h>

int main(){
	
	float sp,cp,loss,profit;
	printf("Enter the cost price of product:\n");
	scanf("%f",&cp);
	printf("Enter the selling price of product:\n");
	scanf("%f",&sp);
	
	if(sp>cp){
		profit=sp-cp;
		printf("There is profit of: %.2f",profit);
	}
	else if(cp>sp){
		loss=cp-sp;
		printf("There is loss of: %.2f",loss);
	}
	else{
		printf("There is no profit nor no loss.");
	}
	return 0;
}
