#include <stdio.h>
int main()
{
	int i = 4;
	int a[5] = {20, 21, 14, 19, 30};

print:
	printf("%d ", a[i]);
	i--;
	if (i >= 0)
	{
		goto print;
	}
	return 0;
}