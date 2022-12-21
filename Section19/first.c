#include <stdio.h>
int main()
{
	int i;
	int a[5] = {20, 21, 14, 19, 30};
	for (i = 1; i < 5; i += 2)
		printf("%d\n", a[i]);

	return 0;
}