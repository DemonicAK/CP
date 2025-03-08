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
    int n;cin>>n;
    vector<int> v(8);
    for(int i=1;i<=7;i++)cin>>v[i];
    // for(int i=1;i<=7;i++)cout<<v[i]<<" ";
    int day=1;
    while(n>0){
        n-=v[day];
        day++;
        if(day==8)day=1;

    }
    if(day==1)cout<<7<<endl;
    else cout<<day-1<<endl;

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