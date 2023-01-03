// write a program to swap two number using pointer
// input: a = 10, b = 20
// output: a = 20, b = 10
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    int *p = &a, *q = &b;

    printf("Before swapping: \n");
    printf("a = %d , ", a);
    printf("b = %d\n", b);

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    printf("After swapping: \n");
    printf("a = %d , ", a);
    printf("b = %d\n", b);

    return 0;
}