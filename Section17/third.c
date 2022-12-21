#include <stdio.h>
int main()
{
	int i = 0;
	int a[3];

	do
	{
		scanf("%d", &a[i]);
		i++;
	} while (i < 3);

	i = 0;
	do
	{
		printf("%d ", a[i]);
		i++;
	} while (i < 3);

	return 0;
}