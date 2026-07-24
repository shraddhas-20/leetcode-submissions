1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4    
5    unordered_set<char> s(jewels.begin(), jewels.end());
6
7        int count = 0;
8
9        for (char ch : stones) {
10            if (s.count(ch))
11                count++;
12        }
13
14        return count;
15    }
16
17};