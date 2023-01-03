#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int src, dest, weight;
};

struct Graph
{
    int V, E;
    struct Edge *edge;
};

bool hasNegativeCycle(struct Graph *graph, int src)
{
    int V = graph->V;
    int E = graph->E;
    int dist[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;
    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            int weight = graph->edge[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }
    for (int i = 0; i < E; i++)
    {
        int u = graph->edge[i].src;
        int v = graph->edge[i].dest;
        int weight = graph->edge[i].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
            return true;
    }
    return false;
}

int main()
{
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    int V = 5;
    int E = 4;
    struct Graph *graph = new Graph;
    graph->V = V;
    graph->E = E;
    graph->edge = new Edge[graph->E];

    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = -1;

    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = -5;

    graph->edge[2].src = 2;
    graph->edge[2].dest = 3;
    graph->edge[2].weight = 3;

    graph->edge[3].src = 3;
    graph->edge[3].dest = 0;
    graph->edge[3].weight = 2;

    if (hasNegativeCycle(graph, 0))
        cout << "The graph contains a negative cycle\n";
    else
        cout << "The graph does not contain a negative cycle\n";

    return 0;
}
