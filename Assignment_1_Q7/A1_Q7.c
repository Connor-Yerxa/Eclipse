#include <stdio.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	int y, n, max=0, min=0;
	float x, tot=0, ave;

	printf("Enter number of Temperatures that you want to input> ");
	scanf("%f", &x);

	for (n=x; n>0; n--){
		printf("Enter number> ");
		scanf("%d", &y);
		tot+=y;
		if (y>=85){
			max++;
			printf("That was a hot day\n");
		}
		else if (y<60){
			min++;
			printf("That was a cold day\n");
		}
		else{
			printf("That was a pleasant day\n");
		}
	}
	ave=tot/x;
	printf("The number of hot days are: %d\n"
			"The number of cold days are: %d\n"
			"{The average Temperature was: %f", max, min, ave);

	return 0;
}
