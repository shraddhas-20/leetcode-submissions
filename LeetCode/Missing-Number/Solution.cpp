1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5
6        for(int i=0; i<=n; i++){
7
8            int count =0;
9
10            for (int j=0; j<n ; j++){
11
12                if (nums[j]== i){
13                    count ++;
14                }
15                
16            }
17            if(count ==0)
18                return i;
19        }
20         return -1;
21
22    }
23};