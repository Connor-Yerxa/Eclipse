#include <stdio.h>
#include <stdlib.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int *a=malloc(32);
	int x, y, z;
	printf("Enter size of array> ");
		scanf("%d", &y);
		a=realloc(a, y*sizeof(int));
	for(x=0;x<y;x++)
	{
		printf("Enter Number> ");
		scanf("%d", &z);
		a[x]=z;
	}
	printf("\nElement to search is: ");
	scanf("%d", &z);
	for(x=0;x<y;x++)
	{
		if(a[x]==z)
		{
			printf("Element found at index: %d", x);
		}
	}
	free(a);
}
