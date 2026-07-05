1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int n = nums.size();
5
6        for (int i=0; i< nums.size(); i++){
7            if (nums[i] >= target){
8                return i;
9            }
10        }
11                return n ;
12        }
13};