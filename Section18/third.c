#include <stdio.h>
int main()
{
	int i = 0, a[10];

	do
	{
		scanf("%d", &a[i]);
		i++;
	} while (i < 10);

	i = 0;

	do
	{
		printf("%d ", a[i]);
		i++;
	} while (i < 10);

	return 0;
}