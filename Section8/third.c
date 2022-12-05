#include <stdio.h>
int main()
{
    int i = 1, sum = 0;
    do{
        sum += i;
        i += 2;
    } while(i <= 21);
    printf("%d", sum);
    return 0;
}
