#include <stdio.h>
int main()
{
	int i = 10;
print:
	printf("Easy!\n");
	i = i - 3;
	if (i > 0)
	{
		goto print;
	}
	printf("No problem!!");
	return 0;
}
