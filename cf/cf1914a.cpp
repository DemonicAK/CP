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
    int n;
    cin>>n;
    string s;
    cin >> s;
    // int n = s.size();
    unordered_map<char, int> freq;
    for (int i = 0; i < n; i++)
        freq[s[i]]++;
    int res = 0;
    for (auto it : freq)
    {
        int mins = it.first - 'A'+1;
        // cout<<"mins"<<mins<<endl;
        it.second -= mins;
        if (it.second >= 0)
            res++;
    }
    cout << res << endl;

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