#include<stdio.h>
#include<math.h>
#define max 5
int main()
{
	int i,j;
	for(i=max;i>=0;i--)
	{
		for (j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
