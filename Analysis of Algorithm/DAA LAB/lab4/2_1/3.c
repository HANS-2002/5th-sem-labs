#include <stdio.h>
#include <stdlib.h>

#define N 50
int *prime;
int itr = 0;

void sieve()
{
    prime = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++)
        prime[i] = 1;
    for (int p = 2; p * p <= N; p++)
    {
        if (prime[p] == 1)
            for (int i = p * p; i <= N; i += p)
                itr++, prime[i] = 0;
    }
}

int isPrime(int n) // O(1)
{
    return prime[n];
}

int main()
{
    freopen("input.txt", "r", stdin);
    printf("BRUH\n");
    sieve();
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