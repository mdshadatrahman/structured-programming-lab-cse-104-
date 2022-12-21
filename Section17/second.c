#include <stdio.h>
int main()
{
	int i = 0;
	int a[3];

	while (i < 3)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i = 0;
	while (i < 3)
	{
		printf("%d ", a[i]);
		i++;
	}

	return 0;
}