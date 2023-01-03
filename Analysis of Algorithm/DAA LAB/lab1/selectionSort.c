#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *a, int n)
{
    printf("Unsorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    int itr = 0, swaps = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            itr++;
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                swaps++;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("Iterations: %d\n", itr);
    printf("Swaps: %d\n", swaps);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    printf("Enter the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nSelection Sort: \n");
    selectionSort(a, n);
    return 0;
}