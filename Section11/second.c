#include <stdio.h>
int main()
{
	int i = 10, j = 0;
	while (i < 40)
	{
		j = 0;
		while (j < 3)
		{
			printf("%d * %d = ", i, j);
			printf("%d\n", i * j);
			j++;
		}
		i = i + 12;
	}

	printf("Matha noshto! No!! Easy ASE!!!");
	printf("%d", i * j);

	return 0;
}