1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>>triangle;
5
6        for(int i=0; i<numRows ; i++){
7            vector<int> rowE1;
8            int result =1;
9            for(int j=0; j<=i ; j++){
10                if(j==0){
11                    result =1;
12                }else{
13                    result = result* (i+-j+1)/j;
14                }
15                rowE1.push_back(result);
16            }
17            triangle.push_back(rowE1);
18        }
19        return triangle;
20    }
21};