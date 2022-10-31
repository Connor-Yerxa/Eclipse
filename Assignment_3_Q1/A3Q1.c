#include <stdio.h>
#include <stdlib.h>

void main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int size, *array;
	int x, y;

	printf("Enter size of array> ");
	scanf("%d", &size);

	array=malloc(size*sizeof(int));

	printf("\nEnter array> ");
	scanf("%d", &array[0]);


	for(x=1;x<size;x++)
	{
		scanf(", %d", &array[x]);
	}

	printf("Enter element to locate> ");
	scanf("%d", &y);

	for(x=0;x<size;x++)
	{
		if(array[x]==y)
		{
			printf("\nOutput: %d", x);
		}
	}


	free (array);
}
