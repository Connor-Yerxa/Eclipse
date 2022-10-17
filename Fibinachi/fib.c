#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
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

