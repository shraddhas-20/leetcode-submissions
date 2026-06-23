1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4    int n = nums.size();
5    vector<int> ans(n, 1);
6
7    int preprod = 1;
8    for(int i = 0; i < n; i++) {
9         ans[i] = preprod;
10        preprod *= nums[i];
11        }
12
13    int postprod = 1;
14    for(int i = n - 1; i >= 0; i--) {
15        ans[i] *= postprod;
16        postprod *= nums[i];
17        }
18
19        return ans;
20    }
21};