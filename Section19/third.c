#include <stdio.h>
int main()
{
	int i = 1;
	int a[5] = {20, 21, 14, 19, 30};

	do
	{
		printf("%d\n", a[i]);
		i += 2;
	} while (i < 5);

	return 0;
}