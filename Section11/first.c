#include <stdio.h>
int main()
{
	int i, j;
	for (i = 10; i < 40; i = i + 12)
		for (j = 0; j < 3; j++)
		{
			printf("%d * %d = ", i, j);
			printf("%d\n", i * j);
		}
	printf("Matha noshto! No!! Easy ASE!!!");
	printf("%d", i * j);

	return 0;
}