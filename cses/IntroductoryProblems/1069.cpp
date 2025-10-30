#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
// https://cses.fi/problemset/task/1069
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
    string s;cin>>s;
    ll ans = 1;
    ll count = 1;
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            ans = max(ans,count);
            count = 1;
        }
    }
    cout<<max(ans,count)<<"\n";
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