#include <iostream>

using namespace std;

pair<int, int> bubbleSort(int *a, int n)
{
    int itr = 0, swaps = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            itr++;
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
                swaps++;
            }
        }
    }
    return {itr, swaps};
}

pair<int, int> selectionSort(int *a, int n)
{
    int itr = 0, swaps = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            itr++;
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                swaps++;
            }
        }
    }
    return {itr, swaps};
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int size = 15;
    while (size--)
    {
        cout << "\n";
        int n;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        // cout << "Enter the array: ";
        for (int i = 0; i < n; i++)
            cin >> a[i], b[i] = a[i];
        cout << "Initial array: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
        // cout << "Bubble Sort: \n";
        // pair<int, int> p1 = bubbleSort(a, n);
        // cout << "Iterations: " << p1.first << "\n";
        // cout << "Swaps: " << p1.second << "\n";
        cout << "\nSelection Sort: \n";
        pair<int, int> p2 = selectionSort(b, n);
        cout << "Iterations: " << p2.first << "\n";
        cout << "Swaps: " << p2.second << "\n";
    }

    return 0;
}