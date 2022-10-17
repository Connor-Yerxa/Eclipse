#include <stdio.h>

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	int a[1000];
	int x, y, z;
	z=sizeof(a)/sizeof(int);
	for(x=0;x<z;x++)
	{
		a[x]=1;
	}

	for(x=2;x<z;x++)
	{
		for(y=2;y<x+1;y++)
		{
			if(y<x && x%y==0)
			{
				a[x]=0;
			}
		}
	}

	for(x=1;x<z;x++)
	{
		if(a[x]==1)
		{
			printf("%d, ", x);
		}
	}
}
