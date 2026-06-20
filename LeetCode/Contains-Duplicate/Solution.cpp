1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int, int>mpp;
5
6        for(int i=0; i<nums.size(); i++){
7            if(mpp.find(nums[i]) != mpp.end()){
8                return true;
9            }
10         mpp[nums[i]]++;    
11         }
12          return false;
13    }
14};