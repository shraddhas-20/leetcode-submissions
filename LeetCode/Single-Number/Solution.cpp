1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int XOR = 0;
5        int n = nums.size();
6
7        for (int i=0 ; i<n ; i++){
8        XOR = XOR^ nums[i];
9        }    return XOR;
10
11    } 
12};