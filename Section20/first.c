#include <stdio.h>
int main()
{
	int i;
	int a[5] = {20, 21, 14, 19, 30};

	for (i = 4; i >= 0; i--)
		printf("%d ", a[i]);
	return 0;
}