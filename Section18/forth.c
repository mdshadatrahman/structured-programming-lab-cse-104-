#include <stdio.h>
int main()
{
	int i = 0, a[110];

first:
	scanf("%d", &a[i]);
	i++;
	if (i < 110)
	{
		goto first;
	}

	i = 0;

second:
	printf("%d ", a[i]);
	i++;
	if (i < 110)
	{
		goto second;
	}

	return 0;
}