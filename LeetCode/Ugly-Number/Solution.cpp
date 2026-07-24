1class Solution {
2public:
3    bool isUgly(int n) {
4        if(n<=0) return false;
5
6        while(n%2 == 0){
7            n/=2;
8        }
9
10        while(n%3 ==0){
11            n/=3;
12        }
13        while(n%5 == 0){
14            n/=5;
15        }
16
17        return n==1;
18    } 
19};