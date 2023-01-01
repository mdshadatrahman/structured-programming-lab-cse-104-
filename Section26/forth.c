#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *p;
	int count = 0;
	p = malloc(100);
	gets(p);

first:
	count++;
	p++;
	if (*p != '\0')
	{
		goto first;
	}
	printf("%d", count);
	return 0;
}