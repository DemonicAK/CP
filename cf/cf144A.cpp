
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
    vector<int>v(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    int maxElementIndex=0, minElementIndex=0;
    int maxval=v[0],minval=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>maxval){
            maxval=v[i];
            maxElementIndex=i;
        }
        if(v[i]<=minval){
            minval=v[i];
            minElementIndex=i;
        }
    }

    
    int ans = 0;
    if (maxElementIndex < minElementIndex)
        ans = (n - 1 - minElementIndex) + (maxElementIndex - 0);

    else{
        // cout<<minElementIndex<<" "<<maxElementIndex;
        ans = (n - 1 - minElementIndex) + (maxElementIndex - 0) - 1;}

    
    cout<< ans << "\n";
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