#include <stdio.h>
int main()
{
	int i = 1, sum = 0, n;
	scanf("%d", &n);

print:
	sum = sum + (i * i);
	i++;

	if (i <= n)
	{
		goto print;
	}
	printf("%d", sum);
	return 0;
}
