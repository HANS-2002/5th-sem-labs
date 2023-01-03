#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int root)
{
    int largest = root;
    int leftChild = 2 * root + 1;
    int rightChild = 2 * root + 2;
    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;
    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;
    if (largest != root)
    {
        swap(&arr[root], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    // We only need to heapify the non-leaf nodes(n/2 - 1 -> 0)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // for (int i = n - 1; i > 0; i--)
    // {
    //     swap(&arr[0], &arr[i]);
    //     heapify(arr, i, 0);
    // }
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    int tc = 120;
    while (tc--)
    {
        int n;
        // printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        int *arr = (int *)malloc(n * sizeof(int));
        // printf("Enter the elements of the array: ");
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        heapSort(arr, n);
        printf("The sorted array is: ");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}