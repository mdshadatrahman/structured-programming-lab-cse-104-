#include <stdio.h>
int main()
{
	int i;
	int a[3];

	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < 3; i++)
		printf("%d ", a[i]);

	return 0;
}