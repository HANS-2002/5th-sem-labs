#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int l, int m, int r)
{
    int *sorted = new int[(r - l + 1)];
    int k = 0;
    int i = l, j = m + 1;
    while (i <= m && j <= r)
    {
        if (arr[i] < arr[j])
            sorted[k++] = arr[i++];
        else
            sorted[k++] = arr[j++];
    }
    while (i <= m)
        sorted[k++] = arr[i++];
    while (j <= r)
        sorted[k++] = arr[j++];
    k = 0;
    for (i = l; i <= r; i++)
        arr[i] = sorted[k++];
}

void mergeSort(int *arr, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
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
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}