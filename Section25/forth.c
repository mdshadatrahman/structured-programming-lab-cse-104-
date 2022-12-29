#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;

	fp = fopen("E100.txt", "w");

first:
	putc(ch, fp);
	if ((ch = getchar()) != EOF)
	{
		goto first;
	}
	fclose(fp);

	fp = fopen("E100.txt", "r");

second:
	putchar(ch);
	if ((ch = getc(fp)) != EOF)
	{
		goto second;
	}
	fclose(fp);

	return 0;
}