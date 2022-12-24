#include <stdio.h>
int main()
{
	int i, max;
	int a[5] = {10, 5, 18, 3, 15};
	max = a[0];
	for (i = 0; i < 5; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	printf("%d", max);
	return 0;
}