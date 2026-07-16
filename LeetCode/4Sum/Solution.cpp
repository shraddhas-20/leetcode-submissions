1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4
5        vector<vector<int>> ans;
6
7        sort(nums.begin(), nums.end());
8
9        int n = nums.size();
10
11        for(int i=0; i<n; i++){
12            if(i > 0 && nums[i] ==nums[i-1]) continue;
13            
14
15            for(int j= i+1 ; j<n; ){
16                int p = j+1 , q= n-1;
17
18                while(p<q){
19                    long long sum = ((long long) nums[i] + (long long) nums[j]+
20                    (long long) nums[p] + (long long) nums[q]);
21
22                    if(sum< target){
23                         p++;
24                    }
25                    else if(sum > target){
26                         q--;
27                    }
28                    else {
29                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
30                        p++;
31                        q--;
32
33                        while(p<q && nums[p] == nums[p-1]) p++;
34                    }
35                }
36                j++;
37                while(j < n && nums[j] == nums[j-1]) j++;
38            }
39        }
40        return ans;
41    }
42};