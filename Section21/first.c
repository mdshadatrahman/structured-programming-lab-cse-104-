#include <stdio.h>
int main()
{
	int i, a[6], sum = 0;
	for (i = 0; i < 6; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < 6; i++)
		sum += a[i];

	printf("%d", sum);

	return 0;
}