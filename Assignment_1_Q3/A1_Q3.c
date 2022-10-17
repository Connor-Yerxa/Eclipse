/*
 * A1_Q3.c
 *
 *  Created on: Sep. 26, 2022
 *      Author: cbyer
 */

#include <stdio.h>
#include <math.h>

int main(){
	int a, p=1000, n=10;
	float r=0.05;
	a=p*pow(1+r, n);
	printf("the total deposit for the year is: %d", a);
	return 0;
}
