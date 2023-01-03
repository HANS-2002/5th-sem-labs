#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false), cin.tie(0);
#define int long long int

using namespace std;

void generate(int n)
{
    for (int i = 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
    for (int i = n; i >= 1; i--)
        cout << i << " ";
    cout << "\n";
    srand(time(0));
    for (int i = 1; i <= n; i++)
        cout << rand() % 100000 + 1 << " ";
}

signed main()
{
    FASTIO;
    freopen("output.txt", "w", stdout);
    int n = 5000;
    while (n <= 50000)
    {
        cout << n << "\n";
        generate(n);
        n += 5000;
    }
    return 0;
}