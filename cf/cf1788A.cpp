#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
// https://codeforces.com/problemset/problem/1788/A
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
    int n;
    cin >> n;
    vector<int> v(n);
    ll left=1,right=1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]%2==0)right++;
    }
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0){left++;right--;}
        if(left==right)
        {
           cout<<i+1<<"\n";
            return;
        }
  
    }
    cout<<"-1\n";


}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    usaco();

    int T;
    cin >> T;

    while (T--)
    {
        solve(T);
    }
    return 0;
}