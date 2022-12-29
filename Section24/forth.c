#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *p, *q, *r, temp;
	p = malloc(100);
	q = malloc(100);
	r = malloc(100);

	gets(p);

	q = p;
	r = p;

first:
	q++;

	if (*q != '\0')
	{
		goto first;
	}
	q--;

second:
	temp = *p;
	*p = *q;
	*q = temp;
	p++;
	q--;
	if (p < q)
	{
		goto second;
	}
	puts(r);
	return 0;
}