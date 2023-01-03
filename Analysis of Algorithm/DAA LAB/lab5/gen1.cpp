#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input1.txt", "w", stdout);
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "5\n";
    for (auto i : v)
        cout << i << " ";
    cout << "\n";
    while (next_permutation(v.begin(), v.end()))
    {
        cout << "5\n";
        for (auto i : v)
            cout << i << " ";
        cout << "\n";
    }
}