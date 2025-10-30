#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumBeauty(vector<int> &nums, int k)
    {
        vector<int> sweep(3e5 + 5, 0);
        int mod = 1e5;
        for (int i = 0; i < (int)nums.size(); i++)
        {
            sweep[nums[i] - k + mod]++;
            sweep[nums[i] + k + 1 + mod]--;
        }
        int ans = 0;
        vector<int> prefix;
        prefix.emplace_back(sweep[0]);
        for (int i = 1; i < (int)sweep.size(); i++)
        {
            prefix.push_back(prefix.back() + sweep[i]);
            ans = max(ans, prefix.back());
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,1,1,1};
    int k = 10;
    cout << s.maximumBeauty(nums, k) << endl;
    return 0;
}