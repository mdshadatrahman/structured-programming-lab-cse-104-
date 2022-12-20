#include <stdio.h>
int main()
{
	int n, r;
	scanf("%d", &n);

	do
	{
		r = n % 10;
		printf("%d", r);
		n = n / 10;
	} while (n > 0);
	return 0;
}