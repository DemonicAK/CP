#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
//  https://cses.fi/problemset/task/1071
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
    ll r, c;
    cin >> r >> c;

    long long maxi = max(r, c);
    long long square = (maxi - 1) * (maxi - 1);
    if (maxi % 2 == 0)
    {
        if (c > r)
        {
            cout << square + r;
        }
        else
        {
            cout << (maxi * maxi) - c + 1 ;
        }
    }
    else
    {
        if (c > r)
        {
            cout << (maxi * maxi) - r + 1 ;
        }
        else
        {
            cout << square + c ;
        }
    }

    cout << "\n";
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    usaco();

    int T = 1;
    cin >> T;

    while (T--)
    {
        solve(T);
    }
    return 0;
}