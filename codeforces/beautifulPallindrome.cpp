#include <bits/stdc++.h>
using namespace std;

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//----------Extra Functions----------
void IOSETUP(string filename = "")
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    unordered_set<int> s;
    vector<int> ans;
    vector<int> unique;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (s.find(arr[i]) == s.end()) unique.push_back(arr[i]);
        s.insert(arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (s.find(i) == s.end() && k > 0)
        {
            ans.push_back(i);
            unique.push_back(i);
            k--;
        }
    }

    while (k > 0)
    {
        for(auto i : unique) {
            if (k == 0) break;
            ans.push_back(i);
            k--;
        } 
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
int32_t main()
{
    IOSETUP();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}