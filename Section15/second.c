#include <stdio.h>
int main()
{
	int n, r, sum = 0;
	scanf("%d", &n);
	for (int i = 0; n > 0;)
	{
		r = n % 10;
		sum += r;
		n = n / 10;
	}
	printf("%d", sum);
	return 0;
}