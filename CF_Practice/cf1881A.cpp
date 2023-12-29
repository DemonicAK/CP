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
int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return 1;
    return 0;
}

void solve(int t)
{
    int n,m;cin>>n>>m;
    string s,x;cin>>x>>s;
    string oprated=x;
    //x-->n s-->m
    //operation only on  x
    int count=0;
    oprated += oprated;
    while (oprated.size() <2* s.size())
    {
        oprated += oprated;
        // count++;
    }
    if(isSubstring(s, oprated) == false){
        cout<<-1<<endl;
        return;
    }
     while (isSubstring(s, x) == false)
    {
        x+=x;
        count++;
    }
    cout<<count<<endl;
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