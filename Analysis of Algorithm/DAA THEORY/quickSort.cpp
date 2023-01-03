#include <bits/stdc++.h>

using namespace std;

int partition(int *arr, int l, int r)
{
    int pivot = arr[r]; // Pivot as last element
    int i = l;
    for (int j = l; j < r; j++)
        if (arr[j] <= pivot)
            swap(arr[i++], arr[j]);
    swap(arr[i], arr[r]);
    return (i);
}

void quickSort(int *arr, int l, int r)
{
    if (l >= r)
        return;
    int pivInd = partition(arr, l, r);
    quickSort(arr, l, pivInd - 1);
    quickSort(arr, pivInd + 1, r);
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
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}