1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        for(int i=0 ; i<nums.size()-1 ; i +=3){
7            if(nums[i] != nums[i+1])
8                return nums[i];
9        }
10        return nums.back();
11    }
12};