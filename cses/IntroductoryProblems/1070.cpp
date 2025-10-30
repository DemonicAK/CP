#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
// https://cses.fi/problemset/task/1070
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

void solve()
{
    int n;cin>>n;
    vector<int>v(n,0);
    int l=0,r=n/2;
    if(n==1)cout<<1;
    if(n>3){
    for(int i=1;i<=n;i++){
        if(i%2){v[r]=i;r++;}
        else {v[l]=i;l++;}
        // n--;
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    }
    else{
        cout<<"NO SOLUTION";
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    usaco();
    solve();
    return 0;
}