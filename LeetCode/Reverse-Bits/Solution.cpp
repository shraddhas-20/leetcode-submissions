1class Solution {
2public:
3    int reverseBits(int n) {
4        int result =0;
5
6        for(int i=1; i<=32; i++){
7        result <<= 1;
8
9        result |= (n&1);
10        
11        n= n>>1;
12    }
13    
14    return result;
15}
16};