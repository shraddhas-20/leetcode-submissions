1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int element = 0;
5        int count = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8            if(count == 0)
9                element = nums[i];
10
11            if(nums[i] == element)
12                count++;
13            else
14                count--;
15        }
16
17        return element;
18    }
19    
20};