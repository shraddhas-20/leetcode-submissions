1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        int XOR =0;
5
6        for(char &ch :s){
7        XOR ^= ch;
8        }
9        for(char &ch :t){
10        XOR ^=ch;
11        }
12        return (char)XOR;
13    }
14};