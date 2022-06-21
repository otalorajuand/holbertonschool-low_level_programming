#include <stdio.h>

int main(void)
{
	unsigned long a = 204284158381; 
	
	int i = 2;

	if (a == 2)
	{
		printf("si");
		return (1);
	}

	while (i < a / 2)
	{
		if (a % i == 0)
		{
			printf("no");
			return (0);
		}
		i++;
	}
	printf("si");
	return (1);
}
