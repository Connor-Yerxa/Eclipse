#include <stdio.h>

int main(){
	int x, y, z=1;
	scanf("%d", &x);
	do{
		y=x%10;
		x=(x-y)/10;
		z*=y;
	}while(x!=0);
	printf("%d", z);
}
