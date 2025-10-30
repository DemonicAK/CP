#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;

// https : // codeforces.com/problemset/problem/1475/A 

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

// void solve(int t)
// {
// }

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

        ll n;cin>>n;

        while (n % 2 == 0)
        {
            n = n / 2;
        }


        if (n != 1)puts("YES");
        else puts("NO");
    }
    return 0;
}