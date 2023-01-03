#include <stdio.h>
#include <stdlib.h>

int iter = 0;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;
    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;
    if (largest != i)
    {
        iter++;
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

int heapSort(int arr[], int n)
{
    iter = 0;
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--)
    {
        iter++;
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
    return iter;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int tc = 10;
    printf("n \t Ascending \t Descending \t Random\n");
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int *asc = (int *)malloc(n * sizeof(int));
        int *desc = (int *)malloc(n * sizeof(int));
        int *rand = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
            scanf("%d", &asc[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &desc[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &rand[i]);
        int itrAsc = heapSort(asc, n);
        int itrDesc = heapSort(desc, n);
        int itrRand = heapSort(rand, n);
        printf("\n%d \t %d \t %d \t %d", n, itrAsc, itrDesc, itrRand);
    }
    return 0;
}