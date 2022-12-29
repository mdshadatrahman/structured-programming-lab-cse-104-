#include <stdio.h>
int main()
{
	int i = 10;

print:
	printf("%d\n", i);
	i++;

	if (i < 13)
	{
		goto print;
	}

	return 0;
}
