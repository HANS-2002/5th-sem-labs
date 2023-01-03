#include <bits/stdc++.h>

using namespace std;

struct node
{
    char ch;
    int fr;
    string code;
    node *left;
    node *right;
};

void dfs(node *root, string code = "")
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        root->code = code;
        return;
    }
    dfs(root->left, code + "0");
    dfs(root->right, code + "1");
}

int main()
{
    vector<node> freq = {
        {'a', 5, "", nullptr, nullptr},
        {'b', 9, "", nullptr, nullptr},
        {'c', 12, "", nullptr, nullptr},
        {'d', 13, "", nullptr, nullptr},
        {'e', 16, "", nullptr, nullptr},
        {'f', 45, "", nullptr, nullptr}};
    sort(freq.begin(), freq.end(), [&](node a, node b)
         { return (a.fr < b.fr); });
    node *root = &freq[0];
    for (int i = 1; i < freq.size(); i++)
    {
        node *newRoot = new node;
        newRoot->left = root;
        newRoot->right = &freq[i];
        root = newRoot;
    }
    dfs(root);
    for (auto i : freq)
        cout << i.ch << " -> " << i.code << "\n";
    return 0;
}