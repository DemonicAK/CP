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
    int a,b,n;
    cin >> a >> b >> n;
    ll sum = 0, oper = 0;
    while (sum <= n)
    {
        if (a > b)
        {
            b += a;
            sum = b;
            oper++;
        }
        else
        {
            a += b;
            sum = a;
            oper++;
        }
        if (sum > n)
        {
            break;
        }
    }
    cout << oper << endl;
    return;
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