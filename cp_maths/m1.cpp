/*
Problem Name:
Problem Link:
Author: Arijit Kar (DemonicAK)
*/
//----------HEADER----------
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007 // 1e9+7
typedef long long ll;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// ----------MAIN-----------

int pw(int a, int b)
{
    if (b == 1)
        return a % mod;
    if (b & 1)
    {
        int t = pw(a, (b - 1) / 2) % mod;
        return 1ll * t * t * a % mod;
    }
    else
    {
        int t = pw(a, b / 2);
        return 1ll * t * t % mod;
    }
}
vector<int> cnt_div_1ton(int n)
{
    vector<int> cnt(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            cnt[j]++;
        }
    }
    return cnt;
}

vector<int> SieveOfEratosthenes(int n)
{
    // it gets all the prime numbers up to n
    vector<int> prime(n + 1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    return prime;
}

const int N = 900;



int32_t main()
{
    fastIO;

    // SIEVE;

    // cout << "2 to the power 3   " << pw(2, 3);
    return 0;
}