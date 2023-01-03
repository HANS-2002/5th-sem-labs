#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt", "w", stdout);
    // cout << "5 sorted arrays: \n";
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

    // cout << "\n5 reverse sorted arrays: \n";
    cout << "8\n";
    for (int i = 1; i <= 8; i++)
        cout << 9 - i << " ";
    cout << "\n";
    cout << "16\n";
    for (int i = 1; i <= 16; i++)
        cout << 17 - i << " ";
    cout << "\n";
    cout << "32\n";
    for (int i = 1; i <= 32; i++)
        cout << 33 - i << " ";
    cout << "\n";
    cout << "64\n";
    for (int i = 1; i <= 64; i++)
        cout << 65 - i << " ";
    cout << "\n";
    cout << "128\n";
    for (int i = 1; i <= 128; i++)
        cout << 129 - i << " ";
    cout << "\n";

    // cout << "\n5 unsorted arrays: \n";
    cout << "8\n";
    for (int i = 1; i <= 8; i++)
        if (i % 2)
            cout << i << " ";
    for (int i = 1; i <= 8; i++)
        if (i % 2 == 0)
            cout << i << " ";
    cout << "\n";
    cout << "16\n";
    for (int i = 1; i <= 16; i++)
        if (i % 2 == 0)
            cout << i << " ";
    for (int i = 1; i <= 16; i++)
        if (i % 2)
            cout << i << " ";
    cout << "\n";
    cout << "32\n";
    for (int i = 1; i <= 32; i++)
        if (i % 2)
            cout << i << " ";
    for (int i = 1; i <= 32; i++)
        if (i % 2 == 0)
            cout << i << " ";
    cout << "\n";
    cout << "64\n";
    for (int i = 1; i <= 64; i++)
        if (i % 2 == 0)
            cout << i << " ";
    for (int i = 1; i <= 64; i++)
        if (i % 2)
            cout << i << " ";
    cout << "\n";
    cout << "128\n";
    for (int i = 1; i <= 128; i++)
        if (i % 2)
            cout << i << " ";
    for (int i = 1; i <= 128; i++)
        if (i % 2 == 0)
            cout << i << " ";
    cout << "\n";
}