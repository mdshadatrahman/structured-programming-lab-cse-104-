#include <stdio.h>
int main()
{
	int i;
	i = 10;

print:
	printf("%d ", i);
	i += 7;
	if (i < 30)
	{
		goto print;
	}

	return 0;
}