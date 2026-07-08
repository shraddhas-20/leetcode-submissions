1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int goal = nums.size() - 1;
5
6        for(int i= nums.size() -2; i>=0 ; i--){
7            if(i+nums[i] >=goal){
8            goal = i;
9            }
10        }
11        if(goal == 0){
12            return true;
13    }
14        return false;
15    }
16};