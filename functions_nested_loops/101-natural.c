#include <stdio.h>

void main(void)
{
	int i = 0;
	int n = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
	}
	printf("%d\n",n);
}
