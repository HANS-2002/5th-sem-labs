#include <stdio.h>
#include <stdlib.h>

struct node
{
    int freq;
    char ch;
};

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    struct node *data = (struct node *)malloc(n * sizeof(struct node));
    for (int i = 0; i < n; i++)
        scanf("%c%d", &data[i].ch, &data[i].freq);
    sort(data, data + n, [](struct node a, struct node b) { return a.freq < b.freq; });
    return 0;
}