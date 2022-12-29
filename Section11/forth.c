#include <stdio.h>
int main()
{
	int i = 10, j = 0;

print:
	j = 0;
print1:
	printf("%d * %d = ", i, j);
	printf("%d\n", i * j);
	j++;
	if (j < 3)
	{
		goto print1;
	}
	i = i + 12;
	if (i < 40)
	{
		goto print;
	}

	printf("Matha noshto! No!! Easy ASE!!!");
	printf("%d", i * j);

	return 0;
}