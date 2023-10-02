#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int sum = accumulate(b, b + m, 0);
    if (n <= m)
    {
        cout << sum;
    }
    sort(a, a + n);
    int suma = accumulate(a + m, a + n, sum);
    cout << suma;
}
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
        solve();
    }
    return 0;
}
