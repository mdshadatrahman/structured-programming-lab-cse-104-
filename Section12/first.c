#include <stdio.h>
int main()
{
	int i;
	i = 10;
	for (; i < 30;)
	{
		printf("%d ", i);
		i += 7;
	}
	return 0;
}