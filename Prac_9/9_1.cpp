#include <iostream>
#include <queue>
using namespace std;

int graph[10][10], visited[10], n;

void DFS(int v) {
    cout << v << " ";
    visited[v] = 1;

    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

void BFS(int start) {
    queue<int> q;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        cout << v << " ";

        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int start;

    cout << "Enter number of buildings: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    cout << "Enter starting building: ";
    cin >> start;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    cout << "DFS: ";
    DFS(start);

    cout << "\nBFS: ";
    BFS(start);

    cout << endl;
    return 0;
}