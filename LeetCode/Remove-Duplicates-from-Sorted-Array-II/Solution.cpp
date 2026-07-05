1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size()<2){
5            return nums.size();
6        }
7
8        int i = 2;
9        for(int j=2; j< nums.size(); j++){
10           if( nums[j] != nums[i-2]){
11            nums[i] = nums[j];
12            //write pointer i stores the read pointer(j) element
13
14            i++;
15           }
16        }
17        return i;
18    }
19};