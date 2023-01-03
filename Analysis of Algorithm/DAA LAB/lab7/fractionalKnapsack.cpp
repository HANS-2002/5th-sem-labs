#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int n, w; // n -> number of elements, w -> capacity of knapsack
        cin >> n >> w;
        vector<pair<int, int>> v; // Stores the (value, weight) of each item
        for (int i = 0; i < n; i++)
        {
            int value, weight;
            cin >> value >> weight;
            v.push_back({value, weight});
        }
        // Sorting the vector in descending order of value/weight
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
             { return (double)a.first / a.second > (double)b.first / b.second; });
        double ans = 0;
        for (int i = 0; i < n; i++)
        {
            int value = v[i].first;
            int weight = v[i].second;
            if (w >= weight)
            {
                ans += value;
                w -= weight;
            }
            else
            {
                ans += (double)value / weight * w;
                break;
            }
        }
        cout << fixed << setprecision(2) << ans << "\n";
    }
    return 0;
}