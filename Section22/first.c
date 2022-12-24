#include <stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Enter number of Array: ");
	scanf("%d", &n);

	int a[n];
	printf("Enter elements of Array: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
		sum += a[i];

	printf("%d", sum);

	return 0;
}