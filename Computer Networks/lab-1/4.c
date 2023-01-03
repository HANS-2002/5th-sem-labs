// write a program to extract each byte from given number using binary operator

#include <stdio.h>

int main()
{
    int num = 258, bitmap = 0xff, i = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    while (i < 4)
    {
        printf("Byte %d -> %d\n", i + 1, num & bitmap);
        i++;
        num >>= 8;
    }
    return 0;
}