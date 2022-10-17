#include <stdio.h>
#include <string.h>

int main(){
	int x=3, a[]={12, 34, 52, 71}, n;
	char ray[]={"stupid"}, ar[]={"you are "};
	for (n=x-1; n>=0; n--){
		printf("%d\n", a[n]);
	}
	printf("%s\n", ar);
	printf("%s\n", ray);
	strcat(ar, ray);
	printf("%s", ar);
	return 0;
}
