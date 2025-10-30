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
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> idx;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            idx.push_back(i + 1);
        }
    }
    cout << idx.size() << "\n";
    for (auto i : idx)
        cout << i << " ";
    cout << "\n";
    return;
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
    return 0;
}