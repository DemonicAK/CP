#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
//  https://codeforces.com/problemset/problem/1535/B
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



}

int main()
{

    usaco();
    int T= 1;
    cin >> T;

    while (T--)
    {
        // solve(T);
        int n;cin>>n;
        vector<int> a(n);
        for(int &x:a)cin>>x;

        sort(a.begin(),a.end(),[](int x,int y){
            return (x%2)<(y%2);
        });
    int ans=0;
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],2*a[j])>1){
                    // cout<<"NO\n";
                    ans++;
                    // goto done;
                }
            }
        }
cout<<ans<<"\n";    
    }
    return 0;
}