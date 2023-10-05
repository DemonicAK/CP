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
    string s;cin>>s;
    vector<int> v(4,0);
    for(int i=0;i<s.size();i+=2){
        v[s[i]-'0']++;
    }
    string ans="";
    for(int i=1;i<=3;i++){
        while(v[i]--){
            ans+=to_string(i);
            ans+='+';
        }
    }
    cout<<ans.substr(0,ans.size()-1);
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