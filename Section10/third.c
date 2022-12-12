#include <stdio.h>
int main()
{
   	int i = 0;
	int j = 10;
	do{
        do{
            printf("%d\n", i + j);
			j++;
        } while(j < 12);
        j = 10;
        i++;
	} while (i < 3);
	printf("Jotil!!!");
	return 0;
}
