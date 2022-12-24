#include <stdio.h>
int main()
{
	int i = 0, max;
	int a[5] = {10, 5, 18, 3, 15};
	max = a[0];
	while (i < 5)
	{
		if (a[i] > max)
			max = a[i];

		i++;
	}
	printf("%d", max);
	return 0;
}