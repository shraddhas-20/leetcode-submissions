1class RecentCounter {
2public:
3 queue<int> qu;
4    RecentCounter() {
5       
6    }
7        int ping(int t) {
8        qu.push(t);
9
10        while(qu.front() <t-3000){
11            qu.pop();
12        }
13        return qu.size();
14        
15        
16    }
17};
18
19/**
20 * Your RecentCounter object will be instantiated and called as such:
21 * RecentCounter* obj = new RecentCounter();
22 * int param_1 = obj->ping(t);
23 */