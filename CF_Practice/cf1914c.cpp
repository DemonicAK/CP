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
    int n, k;
    cin >> n >> k;
// cout<<n<<" "<<k<<endl;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int res = 0;
    if (k>n)
    {
        // greedy
        res = accumulate(a.begin(), a.end(), 0);
        // cout<<res<<endl;
        int maxval = *max_element(b.begin(), b.end());
        // cout<<maxval<<endl;
        // cout<<k-n<<endl;
        res += ((k-n) * maxval);
    }
    else
    {
        res = a[0];
        int prevdone = 1;
        for (int i = 1; i < k; i++)
        {
            if (prevdone)
            {
                if (a[i] > b[i - 1])
                {
                    prevdone = 1;
                    res += a[i];
                }
                else
                {
                    prevdone = 0;
                    res += b[i - 1];
                }
            }
            else
            {
                prevdone = 0;
                res += a[i-1];

            }
        }
    }
    cout << res << endl;

    cout<<5/2;
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