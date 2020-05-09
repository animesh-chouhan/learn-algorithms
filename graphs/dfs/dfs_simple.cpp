#include <bits/stdc++.h>

using namespace std;

#define ROW 5
#define COL 5
#define V 5

void dfs(int s, int g[ROW][COL], bool visited[V])
{
    cout << s << "\n";
    if (visited[s] == true)
    {
        return;
    }
    else
    {
        visited[s] = true;
        for (int i = 0; i < COL; ++i)
        {
            if (g[s][i] != 0)
            {
                dfs(i, g, visited);
            }
        }
    }
}

int main()
{
    int g[ROW][COL] = {{1, 1, 0, 0, 0},
                       {0, 1, 0, 0, 1},
                       {1, 0, 0, 1, 1},
                       {0, 0, 0, 0, 0},
                       {1, 0, 1, 0, 1}};

    bool visited[V];
    dfs(2, g, visited);
    return 0;
}