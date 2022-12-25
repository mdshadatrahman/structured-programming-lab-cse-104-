#include <stdio.h>
int main()
{
	int i = 0, a[6], sum = 0;
	while (i < 6)
	{
		scanf("%d", &a[i]);
		i++;
	}

	i = 0;

	while (i < 6)
	{
		sum += a[i];
		i++;
	}

	printf("%d", sum);

	return 0;
}