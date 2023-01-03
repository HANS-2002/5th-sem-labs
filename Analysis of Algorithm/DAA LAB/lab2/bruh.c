#include <stdio.h>

int func1(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        itr++;
    return itr;
}

int func2(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            itr++;
    return itr;
}

int func3(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                itr++;
    return itr;
}

int func4(int n, int k)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
            itr++;
    return itr;
}

int func5(int n, int k)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k / 2; j++)
            itr++;
    return itr;
}

int func6(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n / 2; j++)
            itr++;
    return itr;
}

int func7(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 100; j++)
            itr++;
    return itr;
}

int func8(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            itr++;
    return itr;
}

int func9(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i / 2; j++)
            itr++;
    return itr;
}

int func10(int n)
{
    int itr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i / 3; j++)
            itr++;
    return itr;
}

int main()
{
    int n = 2;
    printf("\nFunction1 : ");
    while (n <= 1024)
        printf("%d ", func1(n)), n *= 2;
    n = 2;
    printf("\nFunction2 : ");
    while (n <= 1024)
        printf("%d ", func2(n)), n *= 2;
    n = 2;
    printf("\nFunction3 : ");
    while (n <= 1024)
        printf("%d ", func3(n)), n *= 2;
    n = 2;
    printf("\nFunction4 : ");
    while (n <= 1024)
        printf("%d ", func4(n, 500)), n *= 2;
    n = 2;
    printf("\nFunction5 : ");
    while (n <= 1024)
        printf("%d ", func5(n, 500)), n *= 2;
    n = 2;
    printf("\nFunction6 : ");
    while (n <= 1024)
        printf("%d ", func6(n)), n *= 2;
    n = 2;
    printf("\nFunction7 : ");
    while (n <= 1024)
        printf("%d ", func7(n)), n *= 2;
    n = 2;
    printf("\nFunction8 : ");
    while (n <= 1024)
        printf("%d ", func8(n)), n *= 2;
    n = 2;
    printf("\nFunction9 : ");
    while (n <= 1024)
        printf("%d ", func9(n)), n *= 2;
    n = 2;
    printf("\nFunction10 : ");
    while (n <= 1024)
        printf("%d ", func10(n)), n *= 2;
    return 0;
}