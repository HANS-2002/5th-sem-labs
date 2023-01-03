#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int, int>> objects = {{60, 10}, {100, 20}, {120, 30}}; // {Value, Weight}
    int weight = 50;
    double ans = 0;
    sort(objects.begin(), objects.end(), [&](pair<int, int> a, pair<int, int> b)
         { return (a.first * 1.0 / a.second > b.first * 1.0 / b.second); });
    for (int i = 0; i < objects.size(); i++)
    {
        if (objects[i].second <= weight)
        {
            weight -= objects[i].second;
            ans += objects[i].first;
        }
        else
        {
            ans += weight * (objects[i].first * 1.0 / objects[i].second);
            break;
        }
    }
    cout << "Max Value: " << ans << "\n";
    return 0;
}