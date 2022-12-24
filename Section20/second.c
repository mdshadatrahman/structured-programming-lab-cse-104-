#include <stdio.h>
int main()
{
	int i = 4;
	int a[5] = {20, 21, 14, 19, 30};

	while (i >= 0)
	{
		printf("%d ", a[i]);
		i--;
	}
	return 0;
}