#include <stdio.h>
int main()
{
	int i = 0, a[6], sum = 0;

first:
	scanf("%d", &a[i]);
	i++;
	if (i < 6)
	{
		goto first;
	}

	i = 0;

second:
	sum += a[i];
	i++;
	if (i < 6)
	{
		goto second;
	}

	printf("%d", sum);

	return 0;
}