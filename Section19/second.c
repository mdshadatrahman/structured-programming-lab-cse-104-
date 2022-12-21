#include <stdio.h>
int main()
{
	int i = 1;
	int a[5] = {20, 21, 14, 19, 30};
	while (i < 5)
	{
		printf("%d\n", a[i]);
		i += 2;
	}

	return 0;
}