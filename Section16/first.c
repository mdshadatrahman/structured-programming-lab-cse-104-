#include <stdio.h>
int main()
{
	int a = 0, b = 1, c, n;
	scanf("%d", &n);
	printf("%d %d", a, b);
	c = a + b;
	while (c <= n)
	{
		printf(" %d", c);
		a = b;
		b = c;
		c = a + b;
	}
}