1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* middleNode(ListNode* head) {
14
15        int count = 0;
16        ListNode* temp = head;
17
18        while(temp != NULL){
19            count++;
20            temp = temp->next;
21        }
22
23        temp = head;
24
25        for(int i = 0; i < count / 2; i++){
26            temp = temp->next;
27        }
28
29        return temp;
30    }
31};