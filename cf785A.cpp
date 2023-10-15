

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
    unordered_map<string, int> myMap = {// This equals sign is optional
                              {"Tetrahedron", 4},
                              {"Cube", 6},
                              {"Octahedron", 8},
                              {"Dodecahedron", 12},
                              {"Icosahedron", 20}};

int n;cin>>n;
int ans=0;
for(int i=0;i<n;i++){
    string x;cin>>x;
    ans+=myMap[x];
}
cout<<ans<<"\n";

    return;
};
                       



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