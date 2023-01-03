#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int, int>> activities = {{1, 3}, {3, 4}, {2, 5}, {4, 7}, {8, 9}, {7, 10}, {9, 11}, {11, 12}, {9, 13}, {12, 14}};
    // 1 3 4 6 7 9 10
    vector<pair<int, int>> viable = {activities[0]};
    for (int i = 1, j = 0; i < activities.size(); i++)
        if (activities[i].first >= activities[j].second)
            viable.push_back(activities[i]), j = i;
    cout << "Viable Activities:\n";
    for (auto i : viable)
        cout << "(" << i.first << ", " << i.second << ")\n";
    return 0;
}