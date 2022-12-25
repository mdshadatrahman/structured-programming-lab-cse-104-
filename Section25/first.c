#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	
	fp = fopen("E100.txt", "w");
	while ((ch = getchar()) != EOF)
		putc(ch, fp);
	fclose(fp);

	fp = fopen("E100.txt", "r");
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);

	return 0;
}
