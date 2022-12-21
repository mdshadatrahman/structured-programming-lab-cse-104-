#include <stdio.h>
int main()
{
	int i = 0, a[110];

	do
	{
		scanf("%d", &a[i]);
		i++;
	} while (i < 110);

	i = 0;

	do
	{
		printf("%d ", a[i]);
		i++;
	} while (i < 110);

	return 0;
}