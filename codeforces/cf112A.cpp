

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
string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); // lowercase
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower); // lowercase
    // cout<<s1<<" "<<s2<<endl;
    if (s1 == s2)
    {
        cout << 0 << endl;
    }
    else
    {
        if (s1 < s2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    // cout<<0<<"\n";
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