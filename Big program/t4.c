/*
 * t4.c
 *
 *  Created on: Oct. 3, 2022
 *      Author: cbyer
 */

#include <stdio.h>
#include <time.h>

int fibinachi(){
	int x=0, y=1, n, z;
	scanf("%d", &n);
	if (n==1){
		printf("0");
		return 0;
	}
	else if (n==2){
		printf("0, 1");
		return 0;
	}
	else{
		printf("0, 1, ");
	}
	do{
		z=x+y;
		printf("%d, ", z);
		x=y;
		y=z;
		n--;
	}while(n>2);
	return 0;
}

int reverse_double(){
	int x=1, ix=0, dix;
	int temp;

	do{
		printf("\nEnter a number> ");
		scanf("%d", &x);
		ix=0;

		if(x<0){
			break;
		}

		do{
			temp=x%10;
			x=(x-temp)/10;
			ix=(ix*10)+temp;
		}while(x>0);

		dix=2*ix;
		printf("The inverse of the number is %d, and the double inverse is %d\n", ix, dix);

	}while(x>=0);

	return 0;
}

int random_number(int c){
	int num, rnum, target=69, count=0;
	do{
		srand(c++);
		num=rand();
		rnum=num%100;


		printf("%d\n", rnum);
		count++;

	}while(rnum!=target);

	printf("Nice!\nIt took %d times to get to %d", count, target);
	c+=count;
	return c;
}

int replay_random(){
	int x, y, z=time(NULL);
	do{
		printf("\nWould you like to play a game?\n1 or 0 > ");
		scanf("%d", &x);
		printf("%d", x);
		if(x==1){
			printf("yes");
			z=random_number(z);
			y=0;
		}
		else if(x==0){
			y=1;
		}
		else{
			printf("\nThat\'s not an answer");
			y=0;
		}
	}while(y==0);
	return 0;
}

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int x, pin=1234;
	do{
		printf("Enter pin> ");
		scanf("%d", &x);
		if(x==pin){
			do{
				printf("Welcome to the main screen. Your options are:"
						"\n0. Exit"
						"\n1. Random number game"
						"\n2. Reverse Double"
						"\n3. Fibinachi"
						"\nInput> ");
				scanf("%d", &x);
				if(x==1){
					replay_random();
				}
				if(x==2){
					reverse_double();
				}
				if(x==3){
					fibinachi();
				}
			}while(x!=0);
			x=1;
		}
	}while(x>0);
}
