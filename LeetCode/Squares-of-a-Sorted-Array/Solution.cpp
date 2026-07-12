1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int n = nums.size();
5
6        vector<int>ans(n);
7        
8        int l= 0 ;
9        int r = n-1;
10        int i = n-1;
11
12        while(l <= r){
13            int lsq = nums[l]* nums[l];
14            int rsq = nums[r]* nums[r];
15
16            if(lsq > rsq ){
17                ans[i] = lsq;
18                l++;
19            }
20            else{
21                ans[i] = rsq;
22                r--;
23            }
24            i--;
25        }
26        return ans;
27    } 
28};