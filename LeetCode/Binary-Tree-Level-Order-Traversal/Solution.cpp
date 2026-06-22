1class Solution {
2public:
3    vector<vector<int>> levelOrder(TreeNode* root) {
4        vector<vector<int>> ans;
5
6        if (root == NULL) {
7         return ans;
8        }
9
10        queue<TreeNode*> q;
11        q.push(root);
12
13        while (!q.empty()) {
14            int size = q.size();
15            vector<int> temp;
16
17            for (int i = 0; i < size; i++) {
18            TreeNode* current = q.front();
19            q.pop();
20
21            temp.push_back(current->val);
22
23            if (current->left != NULL) {
24                q.push(current->left);
25             }
26
27            if (current->right != NULL) {
28                    q.push(current->right);
29                }
30            }
31
32            ans.push_back(temp);
33        }
34
35        return ans;
36    }
37};