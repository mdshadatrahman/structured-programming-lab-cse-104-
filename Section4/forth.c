#include <stdio.h>
int main()
{
	int i = 10;

print:
	printf("Unlimited fun ");
	i = i - 5;

	if (i < 200)
	{
		goto print;
	}
	return 0;
}
