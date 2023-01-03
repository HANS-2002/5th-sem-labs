#include <stdio.h>

int func(int n)
{
    int itr = 1;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < i; j++)
            itr++;
    return itr;
}

// int main()
// {
//     int n = 1;
//     printf("n \t itr\n");
//     while (n <= 1024)
//     {
//         printf("%d \t %d\n", n, func(n));
//         n *= 2;
//     }
//     return 0;
// }

int main()
{
    int n = 1;
    printf("n \t itr\n");
    while (n <= 1024)
    {
        // printf("%d \t %d\n", n, func(n));
        printf("%d\n", func(n));
        n *= 2;
    }
    return 0;
}
