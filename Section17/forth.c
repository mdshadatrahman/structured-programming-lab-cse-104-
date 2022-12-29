#include <stdio.h>
int main()
{
	int i = 0;
	int a[3];

first:
	scanf("%d", &a[i]);
	i++;
	if (i < 3)
	{
		goto first;
	}

	i = 0;

second:
	printf("%d ", a[i]);
	i++;

	if (i < 3)
	{
		goto second;
	}

	return 0;
}