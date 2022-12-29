#include <stdio.h>
int main()
{
	int i = 1, sum = 0;

print:
	sum += i;
	i++;

	if (i < 5)
	{
		goto print;
	}

	printf(" Simple! But Gorgeous!!\n");
	printf("%d", sum);
	return 0;
}
