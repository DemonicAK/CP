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
    ll n;cin>>n;
    int k ;cin>>k;
    // cout<<k;
    while(k){
        if(n%10)n--;
        else n=n/10;
        k--;
    }
    cout<<n<<"\n";
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