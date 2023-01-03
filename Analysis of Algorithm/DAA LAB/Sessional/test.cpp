#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("output.txt", "w", stdout);
    // cout << "Sorted arrays: \n";
    cout << "8\n";
    for (int i = 1; i <= 8; i++)
        cout << i << " ";
    cout << "\n";
    cout << "16\n";
    for (int i = 1; i <= 16; i++)
        cout << i << " ";
    cout << "\n";
    cout << "32\n";
    for (int i = 1; i <= 32; i++)
        cout << i << " ";
    cout << "\n";
    cout << "64\n";
    for (int i = 1; i <= 64; i++)
        cout << i << " ";
    cout << "\n";
    cout << "128\n";
    for (int i = 1; i <= 128; i++)
        cout << i << " ";
    cout << "\n";

    // cout << "Reverse sorted arrays: \n";
    cout << "8\n";
    for (int i = 8; i >= 1; i--)
        cout << i << " ";
    cout << "\n";
    cout << "16\n";
    for (int i = 16; i >= 1; i--)
        cout << i << " ";
    cout << "\n";
    cout << "32\n";
    for (int i = 32; i >= 1; i--)
        cout << i << " ";
    cout << "\n";
    cout << "64\n";
    for (int i = 64; i >= 1; i--)
        cout << i << " ";
    cout << "\n";
    cout << "128\n";
    for (int i = 128; i >= 1; i--)
        cout << i << " ";
    cout << "\n";

    // cout << "Random arrays: \n";
    cout << "8\n";
    for (int i = 1; i <= 8; i++)
        cout << rand() % 1000 << " ";
    cout << "\n";
    cout << "16\n";
    for (int i = 1; i <= 16; i++)
        cout << rand() % 1000 << " ";
    cout << "\n";
    cout << "32\n";
    for (int i = 1; i <= 32; i++)
        cout << rand() % 1000 << " ";
    cout << "\n";
    cout << "64\n";
    for (int i = 1; i <= 64; i++)
        cout << rand() % 1000 << " ";
    cout << "\n";
    cout << "128\n";
    for (int i = 1; i <= 128; i++)
        cout << rand() % 1000 << " ";
    cout << "\n";
    return 0;
}