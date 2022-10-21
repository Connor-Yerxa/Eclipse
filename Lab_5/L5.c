#include <stdio.h>
#include <stdlib.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int *ar, as, x, y, temp, count;

	printf("How long is the array> ");
	scanf("%d", &as);

	ar=malloc(as*sizeof(int));

	for(x=0;x<as;x++)
	{
		printf("\nEnter Element> ");
		scanf("%d", &y);
		ar[x]=y;
	}

	do
	{
		count=0;
		for(x=0;x<as-1;x++)
		{
			if(ar[x]>ar[x+1])
			{
				temp=ar[x];
				ar[x]=ar[x+1];
				ar[x+1]=temp;
				count++;
			}
		}
	}while(count!=0);

	printf("\nThe sorted array is: ");
	for(x=0;x<as-1;x++)
	{
		printf("%d, ", ar[x]);
	}
	printf("%d", ar[as-1]);
}
