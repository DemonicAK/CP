#include <bits/stdc++.h> // Include every standard library
using namespace std;

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
    int n;cin>>n;

  string s=  to_string(n);

// cout<<s<<endl;
    // cout<<n<<endl;
    for(int i=0;i<s.size();i++){
        // cout<<i+1<<endl;
        if(s[i]=='7'){
            s[i]='9';
            break;
        }

    }
    int g=stoi(s);

    cout<<g;
}

// driver code starts

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    usaco();

    int T = 1;
    // cin >> T;

    while (T--)
    {
        solve(T);
    }
    return 0;
}