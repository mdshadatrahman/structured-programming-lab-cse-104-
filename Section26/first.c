#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *p;
	int count = 0;
	p = malloc(100);
	gets(p);

	while (*p != '\0')
	{
		count++;
		p++;
	}
	printf("%d", count);
	return 0;
}