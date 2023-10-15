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
    priority_queue<int> pq;
    int n;cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pq.emplace(i);
    }

    int a, b, c;
    cout << 2 << "\n";
    while (!pq.empty() && pq.size() > 1)
    {
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();

        cout << a << " " << b << "\n";
        c = ceil((a + b) / 2.0);
        pq.push(c);
    }

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