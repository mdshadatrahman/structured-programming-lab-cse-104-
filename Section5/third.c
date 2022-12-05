#include <stdio.h>
int main()
{
    int i = 10;
    do {
        printf("We understand ");
        printf(" now\n");
    i = i + 30;
    } while( i <= 100);

    printf("%d times no problem!", i - 30);
    return 0;
}
