1class Solution {
2public:
3    int addDigits(int num) {
4
5    if(num==0){
6       return 0;
7    }
8   else{
9    return 1+(num-1)%9;
10    }
11}
12};
13