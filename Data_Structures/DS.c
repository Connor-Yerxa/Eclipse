#include <stdio.h>

struct coor /*Coordinates*/
{
	int x;
	int y;
	int z;
};

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);

	int v;				/*Volume*/
	struct coor tc;		/*Top corner*/
	struct coor bc;		/*Bottom corner*/

	printf("Enter point of Top corner of box> ");
	scanf("(%d, %d, %d)", &tc.x, &tc.y, &tc.z);
	printf("(%d, %d, %d)", tc.x, tc.y, tc.z);

	printf("\nEnter point of Bottom corner of box> ");
	scanf("(%d, %d, %d)", &bc.x, &bc.y, &bc.z);
	printf("(%d, %d, %d)", bc.x, bc.y, bc.z);

	v=(tc.x-bc.x)*(tc.y-bc.y)*(tc.z-bc.z);

	if(v<0)
	{
		v*=-1;
	}

	printf("\nThe volume of the box is: %d", v);
}
