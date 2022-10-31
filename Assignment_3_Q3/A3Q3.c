#include <stdio.h>
#include <stdlib.h>

void array_maker(int* size, int* array)
{
	int x;
	printf("Enter size of array> ");
	scanf("%d", &size);

	array=malloc(size*sizeof(int));

	printf("\nEnter array> ");
	scanf("%d", &array[0]);


	for(x=1;x<size;x++)
	{
		scanf(", %d", &array[x]);
	}


}

void main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int size1, size2;
	int *a1, *a2;

	array_maker(&size1, &a1);

	printf("%d", a1[1]);

	free(a1);
}
