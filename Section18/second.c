#include <stdio.h>
int main()
{
	int i = 0, a[110];

	while (i < 110)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i = 0;
	while (i < 110)
	{
		printf("%d ", a[i]);
		i++;
	}

	return 0;
}