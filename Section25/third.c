#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;

	fp = fopen("E100.txt", "w");
	do
	{
		putc(ch, fp);
	} while ((ch = getchar()) != EOF);
	fclose(fp);

	fp = fopen("E100.txt", "r");
	do
	{
		putchar(ch);
	} while ((ch = getc(fp)) != EOF);
	fclose(fp);

	return 0;
}