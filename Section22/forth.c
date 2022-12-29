#include <stdio.h>
int main()
{
	int i = 0, n, sum = 0;
	printf("Enter number of Array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of Array: ");

first:
	scanf("%d", &a[i]);
	i++;
	if (i < n)
	{
		goto first;
	}

	i = 0;

second:
	sum += a[i];
	i++;

	if (i < n)
	{
		goto second;
	}

	printf("%d", sum);
	return 0;
}