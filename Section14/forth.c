#include <stdio.h>
int main()
{
	int n, r;
	scanf("%d", &n);

print:
	r = n % 10;
	printf("%d", r);
	n = n / 10;

	if (n > 0)
	{
		goto print;
	}
	return 0;
}