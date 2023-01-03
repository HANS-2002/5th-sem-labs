#include <bits/stdc++.h>

using namespace std;

void maxHeapify(int *arr, int root, int n)
{
    int leftChild = 2 * root + 1;
    int rightChild = 2 * root + 2;
    int largest = root;
    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;
    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;
    if (largest != root)
        swap(arr[root], arr[largest]),
            maxHeapify(arr, largest, n);
}

void buildMaxHeap(int *arr, int n)
{
    int root = n / 2 - 1;
    while (root >= 0)
        maxHeapify(arr, root, n),
            root--;
}

void heapSort(int *arr, int n)
{
    buildMaxHeap(arr, n);
    for (int root = n - 1; root > 0; root--)
    {
        swap(arr[0], arr[root]);
        maxHeapify(arr, 0, --n);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    heapSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}