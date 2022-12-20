#include <stdio.h>
int main()
{
	int i;
	i = 10;
	do
	{
		printf("%d ", i);
		i += 7;
	} while (i < 30);

	return 0;
}