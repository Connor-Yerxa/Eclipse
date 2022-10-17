#include <stdio.h>
#include <math.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int x=1, ix=0, dix;
	int temp;

	do{
		printf("\nEnter a number> ");
		scanf("%d", &x);
		ix=0;

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
