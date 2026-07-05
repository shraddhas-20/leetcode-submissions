1class Solution {
2public:
3    bool isPalindrome(int x) {
4        
5        long long revnum =0;
6        int dup =x;
7        while (x>0){
8            int pd = x%10;
9            revnum = revnum *10 +pd;
10            x = x/10;
11        }
12        if(dup ==revnum) return true;
13        else return false;
14    }
15};