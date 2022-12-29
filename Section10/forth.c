#include <stdio.h>
int main()
{
	int i = 0;
	int j = 10;

print1:
	printf("%d\n", i + j);
	j++;

	if (j < 12)
	{
		goto print1;
	}

	j = 10;
	i++;

	if (i < 3)
	{
		goto print1;
	}
	printf("Jotil!!!");
	return 0;
}
