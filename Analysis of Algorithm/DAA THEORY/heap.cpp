#include <bits/stdc++.h>

using namespace std;

int heap[1000000];
int n;

void minHeapify(int root)
{
    int leftChild = 2 * root + 1;
    int rightChild = 2 * root + 2;
    int smallest = root;
    if (leftChild < n && heap[leftChild] < heap[smallest])
        smallest = leftChild;
    if (rightChild < n && heap[rightChild] < heap[smallest])
        smallest = rightChild;
    if (smallest != root)
        swap(heap[root], heap[smallest]),
            minHeapify(smallest);
}

void buildMinHeap()
{
    int root = n / 2 - 1;
    while (root >= 0)
        minHeapify(root),
            root--;
}

void insertMinHeap(int el)
{
    heap[n++] = el;
    int i = n - 1;
    while (i > 0 && heap[(i - 1) / 2] > heap[i])
        swap(heap[i], heap[(i - 1) / 2]),
            i = (i - 1) / 2;
}

void deleteMinHeapIndex(int ind)
{
    heap[ind] = heap[--n];
    minHeapify(ind);
}

int main()
{
    cout << "Enter size of heap: ";
    cin >> n;
    cout << "Enter heap elements: ";
    for (int i = 0; i < n; i++)
        cin >> heap[i];
    buildMinHeap();
    cout << "Min heap before inserting 1: ";
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << "\n";
    insertMinHeap(1);
    cout << "Min heap after inserting 1: ";
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    cout << "\n";
    deleteMinHeapIndex(1);
    cout << "Min heap after deleting index 1: ";
    for (int i = 0; i < n; i++)
        cout << heap[i] << " ";
    return 0;
}