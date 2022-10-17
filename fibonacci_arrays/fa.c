/*
 * fa.c
 *
 *  Created on: Oct. 7, 2022
 *      Author: cbyer
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int *fb, i, n;

	printf("Enter positive integer");
	scanf("%d", &n);

	fb=(int*)malloc(n+1);
	fb[0]=0;
	fb[1]=1;

	for(i=2;i<=n-1;i++){
		fb[i]=fb[i-2]+fb[i-1];
		free(fb);
	}
	printf("%d is %d", i, fb[n-1]);
}
