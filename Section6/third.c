#include <stdio.h>
int main()
{
    int i = 1;
    do {
        printf("%d * 1 = %d\n", i, i * 1);
        i++;
    } while(i < 11);
    printf("wow");
    return 0;
}
