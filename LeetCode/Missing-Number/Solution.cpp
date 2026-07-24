1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int ans = n;
6
7        for(int i=0; i<n; i++){
8            ans ^= i;
9            ans ^= nums[i];
10        }
11        return ans;
12    }
13};