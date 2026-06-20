1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4         int mpp[26]={0};
5        
6        if(s.length() != t.length()){
7            return false;
8        }
9
10        for(int i=0 ; i< s.length();i++){
11         mpp[s[i]- 'a']++;
12         mpp[t[i]- 'a']--;
13    }
14        for(int i=0 ; i<26; i++){
15           if( mpp[i] != 0){
16            return false;
17           }
18        }
19        return true;
20    }
21};