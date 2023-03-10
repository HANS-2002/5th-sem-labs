// Write a program to rearrange the elements of an array of n integers such that all even
// numbers are followed by all odd numbers. How many different ways you can solve this
// problem. Write your approaches & strategy for solving this problem.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the array elements: "); 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int *rearranged = (int *)malloc(n * sizeof(int));
    int j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            rearranged[j++] = arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
            rearranged[j++] = arr[i];
    printf("Rearranged Elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", rearranged[i]);
}