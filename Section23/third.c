#include <stdio.h>
int main()
{
	int i = 0, max;
	int a[5] = {10, 5, 18, 3, 15};
	max = a[0];
	do
	{
		if (a[i] > max)
			max = a[i];

		i++;
	} while (i < 5);
	printf("%d", max);
	return 0;
}