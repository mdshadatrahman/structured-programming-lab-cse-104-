#include <stdio.h>
int main()
{
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 10; j < 12; j++)
            printf("%d\n", i + j);
    printf("Jotil!!!");
    return 0;
}
