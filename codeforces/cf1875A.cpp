#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long lloo;
// https://codeforces.com/contest/1875/problem/0
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
    lloo a, b, n;
    cin >> a >> b >> n;
    vector<lloo> x(n);
    lloo sum = 0;
    for (lloo i = 0; i < n; ++i)
    {
        cin >> x[i];
        if (x[i] > a)
        {
            x[i] = a;
        }
        sum += x[i];
    }
    cout << sum + b  << "\n";
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