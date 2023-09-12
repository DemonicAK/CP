#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
//  https://practice.geeksforgeeks.org/contest/gfg-weekly-coding-contest-119/problems
class Solution
{
public:
    int f(int n, int k, vector<int> &b)
    {
        if (n == 0)
        {
            if (k == 1)
            {
                return b[0];
            }
        }

        int in = 0;
        if (n - 2 >= 0)
            in = b[n] + f(n - 2, k - 1, b);

        int ex = 0;
        if (n - 1 >= 0)
            ex = f(n - 1, k, b);
        return max(in, ex);
    }

    int Memo(int n, int k, vector<int> &b, vector<vector<int>> &dp)
    {
        if (k == 1)
        {
            return b[n];
        }

        if (n == 0)
        {
            if (k == 1)
            {
                return b[0];
            }
        }

        if (dp[n][k] != -1)
        {
            return dp[n][k];
        }

        int in = 0;
        if (n - 2 >= 0)
            in = b[n] + Memo(n - 2, k - 1, b, dp);

        int ex = 0;
        if (n - 1 >= 0)
            ex = Memo(n - 1, k, b, dp);

        return dp[n][k] = max(in, ex);
    }

    long long maximumBeauty(int N, int K, vector<int> &B)
    {
        // code here
        // return f(N-1, K, B);
        vector<vector<int>> dp(N + 1, vector<int>(K + 1, -1));
        return Memo(N - 1, K, B, dp);
    }
};

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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    usaco();
    int T = 1;
    // cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        Solution s;
        cout << s.maximumBeauty(n, k, b) << '\n';
    }
    return 0;
}
