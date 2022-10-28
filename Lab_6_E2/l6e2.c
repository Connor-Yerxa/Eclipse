/* BUG ZONE!!!

Example: some common pointer errors */


#include <stdio.h>


main()

{
	setvbuf(stdout, NULL, _IONBF, 0);

	int i = 57;

	float ztran4;

	int track[] = {1, 2, 3, 4, 5, 6}, stick[2][2];

	int *nsave;

	/* Let's try using *nsave as an int variable, and set it to 38 */

	nsave = NULL;
	printf("%i\n", nsave);

	nsave = &i;
	printf("%i\n", *nsave);

	*nsave = 38;
	printf("%i\n", *nsave);

	nsave = &track; /* nsave points at track[0] */
	printf("%i\n", *nsave);

	/* Increase track[0] by 1: */

	(*nsave)++;
	printf("%i\n", *nsave);


	/* Now point at stick: */

	nsave = &stick;
	printf("%i\n", *nsave);

	nsave = stick[0];
	printf("%i\n", *nsave);

	nsave = &stick[0][0];
	printf("%i\n", *nsave);

	nsave = &**stick;
	printf("%i", *nsave);

}
