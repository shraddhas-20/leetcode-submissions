1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int result =0;
5        for(int i=s.length() -1 ; i>=0 ; i--){
6            if(s[i] != ' '){
7                result++;
8            }else if(result >0){
9                break;
10            }
11        }
12        return result;
13    }
14};