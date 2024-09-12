#include "main.h"

/**
 *
 *
 *
 *
 */

void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
