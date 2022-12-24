#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *p, *q, *r, temp;
	p = malloc(100);
	q = malloc(100);
	r = malloc(100);

	gets(p);

	q = p;
	r = p;

	while (*q != '\0')
		for (int i = 0; i < strlen(q); i++)
		{
			if (*q != '\0')
				q++;
		}
	q--;

	for (int i = p; i < q; i++)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}

	puts(r);
	return 0;
}