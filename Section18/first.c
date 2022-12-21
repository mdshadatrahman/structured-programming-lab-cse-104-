#include <stdio.h>
int main()
{
	int i, a[110];
	for (i = 0; i < 110; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < 110; i++)
		printf("%d ", a[i]);

	return 0;
}