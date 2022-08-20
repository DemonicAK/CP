

#include<iostream>
#include<vector>
using namespace std;
const int N=0;

class Solution {  
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int siz=nums.size();
        vector<int> res;
        for (int i=0;i<nums.size();i++){
            
            for(int j=0;j<i;j++){
            if(nums[j]+nums[i]==target){
                res.push_back(i);
                res.push_back(j);
            }
        }   
    }
        
       return res; 
    }
};
    





int main(){
    
    vector<int> test{2,3};
    // cin>>test;
    int target=5;
    Solution sol;

    vector<int> res=sol.twoSum(test,target);
    for(int i = 0; i < res.size(); i++)
    std::cout << res[i] << ' ';

    cout<<endl;
    
    
    
    return 0;
}
