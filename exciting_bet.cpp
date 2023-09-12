#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;

// https : // codeforces.com/problemset/problem/1543/A  (Exciting Bets)

        void
        usaco(string filename = "")
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
        // solve(T);
        long long a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << " " << 0 << '\n';
        else
        {
            long long maxexcite = abs(a - b);
            ll g = maxexcite;
            ll d=a%g;
            long long m = min(d, g - d);
            cout << g << " " << m << '\n';
        }
    }
    return 0;
}