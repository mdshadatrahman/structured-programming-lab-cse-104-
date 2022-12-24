#include <stdio.h>
int main()
{
	int i = 4;
	int a[5] = {20, 21, 14, 19, 30};

	do
	{
		printf("%d ", a[i]);
		i--;
	} while (i >= 0);
	return 0;
}