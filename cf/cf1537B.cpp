#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;

// https://codeforces.com/problemset/problem/1537/B
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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    usaco();
    int t;cin>>t;
    while(t--){
  

        int n, m, i, j;
        cin >> n >> m >> i >> j;

        // 1,1    1,m 
        //  n,1   n,m

        cout << 1 << " " << 1 << " " << n << " " << m << "\n";
    }
}