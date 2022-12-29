#include <stdio.h>
int main()
{
	int i = 1;
	int a[5] = {20, 21, 14, 19, 30};

print:
	printf("%d\n", a[i]);
	i += 2;
	if (i < 5)
	{
		goto print;
	}

	return 0;
}