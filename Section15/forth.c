#include <stdio.h>
int main()
{
	int n, r, sum = 0;
	scanf("%d", &n);

print:
	r = n % 10;
	sum += r;
	n = n / 10;
	if (n > 0)
	{
		goto print;
	}
	printf("%d", sum);
	return 0;
}