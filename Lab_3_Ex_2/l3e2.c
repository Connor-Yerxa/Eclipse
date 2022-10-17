/*
 * l3e2.c
 *
 *  Created on: Oct. 6, 2022
 *      Author: cbyer
 */

#include <stdio.h>
int common_divisor(n1, n2){
	int n;
	do{
		n=n1%n2;
		n1=n2;
		n2=n;
	}while(n!=0);
	return n1;
}

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int num1, num2, divisor;

	do{
		printf("Enter first number> ");
		scanf("%d", &num1);
		printf("Enter second number> ");
		scanf("%d", &num2);setvbuf(stdout, NULL, _IONBF, 0);

		if(num1>num2){
			divisor=common_divisor(num1, num2);
		}
		else if(num1<num2){
			divisor=common_divisor(num2, num1);
		}
		printf("The common divisor of %d and %d is: %d\n\n", num1, num2, divisor);
	}while((num1!=-99) && (num2!=-99));
}
