#include <stdio.h>
int main()
{
	int i = 0, a[10];

	while (i < 10)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i = 0;
	while (i < 10)
	{
		printf("%d ", a[i]);
		i++;
	}

	return 0;
}