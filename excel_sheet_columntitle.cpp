
// https://leetcode.com/problems/excel-sheet-column-title/

#include <bits/stdc++.h> // Include every standard library
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;

class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string ans= "";
        cout<<columnNumber%26<<" "<<columnNumber/26;

        return ans;
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // usaco();

    int T = 1;
    // cin >> T;
    while (T--)
    {
        Solution solution = Solution();
        string aa=solution.convertToTitle(701);

        // cout<<aa;

    }
    return 0;

}