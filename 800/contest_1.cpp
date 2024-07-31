#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> values(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> values[i];
        }

        vector<vector<int>> tree(n + 1);
        vector<int> parent(n + 1);

        for (int i = 2; i <= n; ++i) {
            cin >> parent[i];
            tree[parent[i]].push_back(i);
        }

        // BFS to calculate the excess value
        vector<long long> excess(n + 1, 0);
        queue<int> q;
        q.push(1);
        vector<int> level(n + 1, 0);
        level[1] = 0;
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int child : tree[node]) {
                level[child] = level[node] + 1;
                q.push(child);
            }
        }

        for (int i = n; i >= 1; --i) {
            int node = level[i];
            long long total_child_value = 0;
            for (int child : tree[i]) {
                total_child_value += values[child] + excess[child];
            }
            excess[i] = max(0LL, total_child_value - values[i]);
        }

        cout << values[1] + excess[1] << endl;
    }

    return 0;
}
