#include <stdio.h>
int main()
{
	int i = 10, j = 0;

	do
	{
		j = 0;
		do
		{
			printf("%d * %d = ", i, j);
			printf("%d\n", i * j);
			j++;
		} while (j < 3);
		i = i + 12;
	} while (i < 40);

	printf("Matha noshto! No!! Easy ASE!!!");
	printf("%d", i * j);

	return 0;
}