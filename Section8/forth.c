#include <stdio.h>
int main()
{
	int i = 1, sum = 0;

print:
	sum += i;
	i += 2;

	if (i <= 21)
	{
		goto print;
	}

	printf("%d", sum);
	return 0;
}
