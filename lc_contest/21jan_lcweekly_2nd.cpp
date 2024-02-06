#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;

void floydwarshall(vector<int> adj[], int n)
{
    for (int i = 1; i <= n; i++)
        adj[i][i] = 0;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
}
vector<int> countOfPairs(int n, int x, int y)
{
    vector<vector<int>> adj(n + 1, vector<int>(n + 1, n + 1));
    for (int i = 1; i < n; i++)
    {
        adj[i][i + 1] = 1;
        adj[i + 1][i] = 1;

        // adj[i]
    }
    adj[x][y] = 1;
    adj[y][x] = 1;
    // floydwarshall(adj,n);
    for (int i = 1; i <= n; i++)
        adj[i][i] = 0;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
            }
        }
    }
    unordered_map<int, int> ans;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int dist = adj[i][j] - 1;
            ans[dist]++;
        }
    }

    vector<int> final;
    for (auto &x : ans)
    {
        // cout<<x.second;
        final.push_back(x.second * 2);
    }
    return final;
}

int main(){
    int n = 4, x = 1, y = 2;
    vector<int> ans = countOfPairs(n,x,y);
    for(auto &x:ans){
        cout<<x<<" ";
    }
    return 0;
    }