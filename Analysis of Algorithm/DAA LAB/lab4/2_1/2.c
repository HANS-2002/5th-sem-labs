#include <stdio.h>
#include <stdlib.h>

int itr = 0;

int isPrime(int n) // O(sqrt(n))
{
    itr = 0;
    for (int i = 2; i * i <= n; i++)
    {
        itr++;
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    freopen("input.txt", "r", stdin);

    int n, i = 1;
    // printf("Enter a number: ");
    while (i <= 10)
    {
        scanf("%d", &n);
        isPrime(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
        printf("Iterations: %d\n", itr);
        i++;
    }
    // scanf("%d", &n);
    // isPrime(n) == 1 ? printf("%d is a prime number\n", n) : printf("%d is not a prime number\n", n);
    // printf("Iterations: %d\n", itr);
    return 0;
}