#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *p;
	int count = 0;
	p = malloc(100);
	gets(p);

	// Using an infinit loop
	for (int i = 2; i > 0; i++)
	{
		if (*p == '\0')
			break;
		else
		{
			count++;
			p++;
		}
	}
	printf("%d", count);
	return 0;
}