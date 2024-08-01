#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;

// https://cses.fi/problemset/task/1092
// two sets

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

ll nCr(ll n, ll r)
{
    double sum = 1;
    // Calculate the value of n choose r using the binomial coefficient formula
    for (int i = 1; i <= r; i++)
    {
        sum = sum * (n - r + i) / i;
    }
    return (ll)sum;
}

// end of template

void solve(int t)
{
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES\n";

        ll req = sum / 2;
        ll curr = 0;
        vector<int> v(n + 1, 0);
        for (int i = n; i >= 1; i--)
        {
            if (curr + i <= req)
            {
                curr += i;
                v[i] = 1;
            }
        }
        ll sumi = accumulate(v.begin(), v.end(), 0);
        cout << sumi << "\n";
        for (int i = 1; i <= n; i++)
            if (v[i] == 1)
                cout << i << " ";
        cout << "\n";
        cout << n - sumi << "\n";
        for (int i = 1; i <= n; i++)
            if (v[i] == 0)
                cout << i << " ";
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
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