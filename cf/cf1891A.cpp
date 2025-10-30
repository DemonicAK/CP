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
    // cout<<"Case #"<<t<<": ";
    int n;
    cin >> n;
    // cout<<n<<endl;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
int l=0,r=3;
bool possible=true;
while(r<n){
     possible=is_sorted(v.begin()+l+1, v.begin() + r+1) ;
    l=r;
    r+=3;
}
possible=is_sorted(v.begin()+l+1, v.end()) ;
if(possible)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

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