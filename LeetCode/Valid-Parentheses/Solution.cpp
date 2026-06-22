1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5
6        for (int i = 0; i < s.length(); i++) {
7             char ch = s[i];
8            if(ch == '(' || ch== '[' || ch =='{'){
9            st.push(ch);
10            }
11            else{
12
13                if(st.empty()) return false;
14
15            char temp = st.top();
16            st.pop();
17            if(ch == ')' && temp!= '(' ||
18             ch ==']' && temp!= '[' || 
19             ch == '}' && temp!= '{')
20             {
21                return false;
22            }
23            
24        }
25    }
26    return st.empty();
27}
28};