#include <stdio.h>
int main()
{
	int i = 0, n, sum = 0;
	printf("Enter number of Array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of Array: ");

	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	i = 0;

	while (i < n)
	{
		sum += a[i];
		i++;
	}

	printf("%d", sum);
	return 0;
}