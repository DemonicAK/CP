#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
//  https://cses.fi/problemset/task/1618
//  trailing zeroes
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
ll power(ll x, ll y)
{
    /* Iterative Function to calculate (x^y) in O(logy) */
    ll res = 1; // Initialize result

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // y must be even now
        y = y >> 1; // y = y/2
        x = x * x;  // Change x to x^2
    }
    return res;
}

// end of template

int fivecount(ll n)
{
    int count = 0;
    while (n % 5 == 0)
    {
        count++;
        n /= 5;
    }
    return count;
}
void solve(int t)
{
    ll n;
    cin >> n;
    int num = 5;
    int sum = 0;
    while (num <= n)
    {
        sum += fivecount(num);
        num += 5;
    }

    cout << sum << "\n";
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