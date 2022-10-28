/* Example: basics of pointers, & and * operators */


#include <stdio.h>


main()

{
	setvbuf(stdout, NULL, _IONBF, 0);

	int i = 57, j = 19; /* declare two ints */

	int *ptr; /* and a pointer to an int */

	ptr = NULL; /* constant defined in <stdio.h> as 0

	Means "not pointing to anything" */

	printf("ptr = %p\n", ptr);

	ptr = &i; /* set ptr to the address of i,

	i.e. ptr is a pointer to i,

	and i is the "pointee" of ptr */


	printf("ptr = %p\n", ptr);

	/* We now have two ways of accessing the same variable: */

	printf("i = %i, j = %i, *ptr = %i\n", i, j, *ptr);

	*ptr *= 2; /* same as i = 2 * i; */

	(*ptr)--; /* same as i--; */


	printf("i = %i, j = %i, *ptr = %i\n", i, j, *ptr);

	ptr = &j; /* ptr now points at j */

	printf("i = %i, j = %i, *ptr = %i\n", i, j, *ptr);

	*ptr *= 2; /* same as j = 2 * j; */

	(*ptr)--; /* same as j--; */


	printf("i = %i, j = %i, *ptr = %i\n\n", i, j, *ptr);

	/* Relationships among the variables: */

	printf("&ptr (the address of ptr) is\n%p\n\n", &ptr);

	printf("ptr (the contents of address %p) is\n%p\n\n", &ptr, ptr);

	printf("*ptr (the contents of address %p) is\n%i\n\n", ptr, *ptr);

	printf("&(*ptr) (the address of *ptr) is\n%p\n\n", &(*ptr));

	printf("&j (the address of j) is\n%p\n\n", &j);

	printf("j (the contents of address %p) is\n%i\n\n", &j, j);

	printf("*(&j) (the contents of address %p) is\n%i\n", &j, *(&j));

}


