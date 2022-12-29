#include <stdio.h>
int main()
{
	int i = 110;

print:
	printf("%d ", i);
	i += 7;
	if (i < 30)
	{
		goto print;
	}

	return 0;
}