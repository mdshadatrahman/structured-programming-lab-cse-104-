#include <stdio.h>
int main()
{
	int n, r;
	scanf("%d", &n);
	for (int i = 0; n > 0;)
	{
		r = n % 10;
		printf("%d", r);
		n = n / 10;
	}
	return 0;
}