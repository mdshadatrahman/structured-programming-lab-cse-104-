#include <stdio.h>
int main()
{
   	int i = 0;
	int j = 10;
	while(i < 3)
	{
		while(j < 12)
		{
			printf("%d\n", i + j);
			j++;
		}
		j = 10;
		i++;
	}
	printf("Jotil!!!");
	return 0;
}
