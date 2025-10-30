#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
//   https://cses.fi/problemset/task/1072
//  two knights
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
ll nCr(ll n, ll r)
{
    double sum = 1;
    // Calculate the value of n choose r using the binomial coefficient formula
    for (int i = 1; i <= r; i++)
    {
        sum = sum * (n - r + i) / i;
    }
    return (ll)sum ;
}

void solve(int t)
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n == 1)
            cout << 0 << endl;
        else
        {
            // cout<<i*i<<"\n";
            ll val = nCr(i*i , 2) - 4 * (i - 1) * (i -2);
            cout << val << "\n";
        }
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