#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define int long long
#define ll long long
#define ull unsigned long long
#define ld long double
#define mod 1000000007  //1e9+7

ll nCr(ll n, ll r)
{
    double sum = 1;
    // Calculate the value of n choose r using the binomial coefficient formula
    for (int i = 1; i <= r; i++)
    {
        sum = (sum * (n - r + i) / i);
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
            res = (res * x)%mod;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x)%mod;  // Change x to x^2
    }
    return res;
}
