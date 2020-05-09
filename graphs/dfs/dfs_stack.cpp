#include <bits/stdc++.h>

using namespace std;

#define V 4

void dfs(list<int> *g, int s)
{
    bool visited[V] = {};
    stack<int> S;
    S.push(s);

    while (!S.empty())
    {
        int u = S.top();
        cout << u << "\n";
        S.pop();

        if (visited[u] == false)
        {
            visited[u] = true;
            for (auto x : g[u])
            {
                if (visited[x] == false)
                {
                    S.push(x);
                }
            }
        }
    }
}

int main()
{
    list<int> *g = new list<int>[V];
    g[0].push_back(1);
    g[0].push_back(2);
    g[1].push_back(2);
    g[2].push_back(0);
    g[2].push_back(3);
    g[3].push_back(3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    dfs(g, 2);

    return 0;
}