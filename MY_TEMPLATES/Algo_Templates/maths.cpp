#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef  long long ll;
#define int long long
#define ll long long
#define ull unsigned long long
#define ld long double
#define mod 1000000007  //1e9+7
#define mxN 1000005
const int N = mxN;

void add(ll &a, ll b)
{
    b %= mod;
    a = (a + b) % mod;
}
void mul(ll &a, ll b)
{
    b %= mod;
    a = (a * b) % mod;
}
void sub(ll &a, ll b)
{
    b %= mod;
    a = (a - b) % mod;
    a = (a + mod) % mod;
}

ll nCr(ll n, ll r)
{
    if (n < r || r < 0 || n < 0)
        return 0;
    ll res = fact[n] * ifact[r] % mod * ifact[n - r] % mod;
    return res;
}

ll modExp(ll base, ll exponent , ll modval)
{
    /* Iterative Function to calculate (x^y) in O(logy) */
    ll res = 1; // Initialize result
    while (exponent > 0)
    {
        // If y is odd, multiply x with result
        if (exponent & 1)
            res = (res * base) % modval;

        // y must be even now
        exponent >>=  1; // y = y/2
        base = (base * base) % modval; // Change x to x^2
    }
    return res;
}
ll modInv(ll num, ll modval)
{
    // multiplicative inverse only exists if num and mod are relatively prime (coprime) i.e gcd(num, mod) = 1
    if (__gcd(num, 1ll*modval) != 1)return -1;
    ll res= modExp(num, modval - 2, modval);
    // m is added to handle negative x
    res =(res + modval) % modval;
    return res;
}

ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}


ll fact[N];
ll ifact[N];
void factcalc()
{
    fact[0] = 1;
    for (ll i = 1; i < N; i++)
        fact[i] = i * fact[i - 1] % mod;

    ifact[N - 1] = modInv(fact[N - 1],mod);

    for (ll i = N - 1; i > 0; i--)
        ifact[i - 1] = ifact[i] * i % mod;
}

vector<ll> phi(N);
void phli()
{
    for (ll i = 0; i < N; i++)
        phi[i] = i;
    for (ll i = 2; i < N; i++)
    {
        if (phi[i] == i)
        {
            for (ll j = i; j < N; j += i)
                phi[j] -= (phi[j] / i);
        }
    }
}

ll dearr[N];
void dearrange()
{
    ll p = 1;
    for (ll i = 1; i < N; i++)
    {
        if (i % 2)
            p = (p - ifact[i] + mod) % mod;
        else
            p = (p + ifact[i]) % mod;
        dearr[i] = fact[i] * p % mod;
    }
}

// Faster Sieve
#define SIEVE
int primes[N];
vector<int> pr;
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (primes[i] == 0)
        {
            pr.push_back(i);
            for (int j = i * i; j < N; j += i)
            {
                primes[j] = 1;
            }
        }
        primes[i] ^= 1;
    }
}


int cnt_div(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (i != n / i)
                cnt += 2;
        }
    }
    return cnt;
}
int main(){return 0;}

