1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int n = nums.size();
5        int temp=0;
6        
7      for (int i=0; i<n;i++ ){
8        if(nums[i]!=0) {
9            swap(nums[i],nums[temp]);
10            temp++;
11        }
12      }
13    }
14};