#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;

void usaco(string filename = "")
{
    if (filename.size() > 0)
    {
#ifndef ONLINE_JUDGE
        freopen((filename + ".in").c_str(), "r", stdin);
        freopen((filename + ".out").c_str(), "w", stdout);
#endif
    }
    else
    {
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
#endif
    }
}
// end of template

void solve(int t)
{
    int n,m;cin>>n>>m;
    vector<vector<char>> v(n, vector<char>(m,'.' ));
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < m; j++)
            {
                v[i][j] = '#';
            }
            
        }
        else
        {
            if (i%4==1)
            {
                v[i][m-1] = '#';
            }
            else
            {
                v[i][0] = '#';
            }
            
        }
        
    }

    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }

    return;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    usaco();

    int T = 1;
    // cin >> T;

    while (T--)
    {
        solve(T);
    }
    return 0;
}