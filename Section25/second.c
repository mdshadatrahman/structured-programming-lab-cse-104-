#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;

	ch = fopen("forloop.txt", "w");

	for (int i = 0; i <= EOF; i++)
	{
		// ch = getchar();
		// putc(ch, fp);
	}
	fclose(fp);

	return 0;
}