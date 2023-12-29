//  https://codeforces.com/problemset/problem/1551/A

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
    // cout << t;

    int amt;cin>>amt;
    int c2=0,c1=0;
    c2 = amt/3;c1 = amt/3;
    if(amt%3==1){
        c1++;
    }
    else if(amt%3==2){
        c2++;
    }

    cout<<c1<<" "<<c2<<endl;

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
