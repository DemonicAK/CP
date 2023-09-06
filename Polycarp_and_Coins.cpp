//  https://codeforces.com/problemset/problem/1551/A

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
cout<<t;

}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    usaco();

    int T = 1;
    cin >> T;

    while(T--)
    {
        solve(T);
    }
    return 0;
}
