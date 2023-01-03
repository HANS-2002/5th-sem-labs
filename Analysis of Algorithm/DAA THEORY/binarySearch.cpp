#include <bits/stdc++.h>

using namespace std;

int binarySearch(int *arr, int x, int n)
{
    int l = 0, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main()
{
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter x: ";
    cin >> x;
    int ind = binarySearch(arr, x, n);
    if (ind == -1)
        cout << "Element doesn't exist\n";
    else
        cout << "Element found at index " << ind << "\n";
    return 0;
}