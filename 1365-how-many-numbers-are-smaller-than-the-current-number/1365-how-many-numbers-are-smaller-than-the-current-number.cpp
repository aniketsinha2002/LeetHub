// #include <iostream>
// #include <vector>
// #include <numeric>   
// using namespace std;

// int arraySum(vector<int> &hash, int k)
// {
//     int sum = 0;
//     return accumulate(hash.begin(), k-1, sum);
// }
 

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> hash(101,0);
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
            hash[nums[i]]++;
        
        for(int i=1;i<100;i++)
            hash[i]+=hash[i-1];
        
        for(int i=0;i<nums.size();i++)
        {if(nums[i]==0) ans.push_back(0);
            else ans.push_back(hash[nums[i]-1]);}
        
        return ans;
        
    }
};