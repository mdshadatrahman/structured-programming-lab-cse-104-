#include <stdio.h>
int main()
{
	int i = 0, n, sum = 0;
	printf("Enter number of Array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of Array: ");

	do
	{
		scanf("%d", &a[i]);
		i++;
	} while (i < n);

	i = 0;

	do
	{
		sum += a[i];
		i++;
	} while (i < n);

	printf("%d", sum);
	return 0;
}