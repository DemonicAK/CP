#include <bits/stdc++.h> // Include every standard library
using namespace std;
typedef long long ll;
int minimumArrayLength(vector<int> &nums)
{

    std::priority_queue<int, std::vector<int>, std::less<int>> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
    }

    while (pq.top() != 0 && pq.size() != 1)
    {
        int f = pq.top();
        pq.pop();

        int s = pq.top();
        if (s <1)
          {  return pq.size()+1; }
        pq.pop();
// cout<<s<<" "<<f<<" "<<s%f<<endl;
        pq.push(s % f);
    }

    return pq.size();
}

int main()
{
    vector<int> nums = {1,1,3,4};
    cout << minimumArrayLength(nums);
    return 0;
}