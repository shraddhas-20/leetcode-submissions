1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int n = nums.size();
5        int j=0;
6        
7      for (int i=0; i<n;i++ ){
8        if(nums[i]!=0) {
9            swap(nums[i],nums[j]);
10            j++;
11        }
12      }
13    }
14};