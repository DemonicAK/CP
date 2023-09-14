#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
//  https://cses.fi/problemset/task/1083
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
    ll n;cin>>n;
    ll sum = 0;
    for(int i=0;i<n-1;i++)
    {
        ll x;cin>>x;
        sum+=x;
    }
    ll total = (n*(n+1))/2;
    cout<<total-sum<<"\n";
}
// 1 2 3 4 5
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