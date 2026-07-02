/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>bfs;
        bfs.push(root);

        vector<int>output;

        while(!bfs.empty()){
            TreeNode* right = nullptr;
            int size = bfs.size();

            for(int i = 0; i < size; i++){
                TreeNode* curr = bfs.front();
                bfs.pop();

                if(curr){
                    right = curr;
                    bfs.push(curr->left);
                    bfs.push(curr->right);
                }
            }

            if(right){
                output.push_back(right->val);
            }
        }
        return output;
    }
};
