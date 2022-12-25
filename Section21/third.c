#include <stdio.h>
int main()
{
	int i = 0, a[6], sum = 0;
	do
	{
		scanf("%d", &a[i]);
		i++;
	} while (i < 6);

	i = 0;

	do
	{
		sum += a[i];
		i++;
	} while (i < 6);

	printf("%d", sum);

	return 0;
}