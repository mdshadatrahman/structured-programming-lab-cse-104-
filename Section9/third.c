#include <stdio.h>
int main()
{
    int i = 1, sum = 0, n;
    scanf("%d", &n);
    do{
        sum = sum + (i * i);
        i++;
    } while(i <= n);
    printf("%d", sum);
    return 0;
}
