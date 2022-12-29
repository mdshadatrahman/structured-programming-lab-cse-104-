#include <stdio.h>
int main()
{
	int i = 1;

print:
	printf("%d * 1 = %d\n", i, i * 1);
	i++;

	if (i < 11)
	{
		goto print;
	}

	printf("wow");
	return 0;
}
