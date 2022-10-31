#include <stdio.h>
#include <stdlib.h>

void main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int size, *array;
	int x, y, z;

	printf("Enter size of array> ");
	scanf("%d", &size);

	array=malloc(size*sizeof(int));

	printf("\nEnter array> ");
	scanf("%d", &array[0]);


	for(x=1;x<size;x++)
	{
		scanf(", %d", &array[x]);
	}

	do
	{
		y=array[0];
		for(z=0;z<size-1;z++)
		{
			array[z]=array[z+1];
		}
		array[size-1]=y;

		printf("\nNew array: %d", array[0]);
		for(z=1;z<size;z++)
		{
			printf(", %d", array[z]);
		}

		printf("\nPress 1 to rotate again> ");
		scanf("%d", &x);
	}while(x==1);

	free(array);
}
