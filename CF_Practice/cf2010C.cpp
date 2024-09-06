
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ak                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define sz(s) (int)(s).size()
#define endl "\n"
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

void File();
void sol();
const int N = 4e5 + 5;
int f[N];
string s;
void kmp()
{
    int match = 0;
    for (int i = 1; i < sz(s); ++i)
    {
        while (match && s[match] != s[i])
            match = f[match - 1];
        if (s[match] == s[i])
            match++;
        f[i] = match;
    }
}
int main()
{
    ak
    File();
    int t = 1;
    //    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}

void sol()
{
    cin >> s;
    kmp();
    int x = f[sz(s) - 1];
    if (x <= sz(s) / 2)
        return void(cout << "NO");
    cout << "YES\n";
    cout << s.substr(0, x);
}

void File()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}