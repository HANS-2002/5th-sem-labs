#include <bits/stdc++.h>

using namespace std;

vector<int> insertionSort(vector<int> arr, int n)
{
    int i, key, j, op = 0, swaps = 0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            op++;
        }
        arr[j + 1] = key;
        swaps++;
    }
    return {op, swaps, op + swaps * 3};
}

vector<int> selectionSort(vector<int> arr, int n)
{
    int i, j, min_idx, op = 0, swaps = 0;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j, op++;
        swap(arr[min_idx], arr[i]);
        if (min_idx != i)
            swaps++;
    }
    return {op, swaps, op + swaps * 3};
}

int main()
{
    freopen("input2.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);

    for (int i = 0; i < 3; i++)
    {
        cout << "Output" << i + 1 << ":\n";
        for (int j = 0; j < 5; j++)
        {
            int n;
            cin >> n;
            vector<int> a(n);
            for (auto &i : a)
                cin >> i;
            // for (auto i : a)
            //     cout << i << " ";
            vector<int> ins = insertionSort(a, n);
            vector<int> sel = selectionSort(a, n);
            cout << "\n";
            cout << "Number of operations in insertion sort: " << ins[0] << " " << ins[1] << " " << ins[2] << endl;
            cout << "Number of operations in selection sort: " << sel[0] << " " << sel[1] << " " << sel[2] << endl;
        }
        cout<<"\n\n\n\n";
    }
    return 0;
}