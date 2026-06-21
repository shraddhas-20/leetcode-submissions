1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int min = prices[0];
5        int max =0;
6
7        for (int i=1 ; i<prices.size() ; i++ ){
8            if(prices[i] < min){
9                min = prices[i];
10            }else{
11                int profit = prices[i]- min;
12                if(profit > max){
13                    max = profit;
14                }
15            }
16            }
17            return max;
18    }
19};