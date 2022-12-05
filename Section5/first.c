#include <stdio.h>
int main()
{
    int i;
    for(i = 10; i <= 100; i = i + 30)
    {
        printf("We understand ");
        printf(" now\n");
    }
    printf("%d times no problem!", i - 30);
    return 0;
}
