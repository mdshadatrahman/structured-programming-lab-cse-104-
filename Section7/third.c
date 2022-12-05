#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    do{
        sum += i;
        i++;
    } while(i < 5);
    printf(" Simple! But Gorgeous!!\n");
    printf("%d", sum);
    return 0;
}
