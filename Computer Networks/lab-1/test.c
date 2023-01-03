#include <stdio.h>

int main()
{
    printf("%d\n", 0xf);
    printf("%d\n", 0xff);
    printf("%d\n", 0xfff);
    printf("%d\n", 0xffff);
    printf("%d\n", 0xfffff);
    printf("%d\n", 0xffffff);
    printf("%d\n", 0xfffffff);
    // printf("%ld\n", (long)0xffffffff - (long)1);
    return 0;
}