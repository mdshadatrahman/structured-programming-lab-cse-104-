#include <stdio.h>
int main()
{
	int i = 10;

print:
	printf("We understand ");
	printf(" now\n");
	i = i + 30;

	if (i <= 100)
	{
		goto print;
	}
	printf("%d times no problem!", i - 30);
	return 0;
}
