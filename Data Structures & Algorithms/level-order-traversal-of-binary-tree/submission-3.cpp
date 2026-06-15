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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        queue<TreeNode*>bfs;
        bfs.push(root);

        if(!root){
            return output;
        }

        while(!bfs.empty()){
            vector<int>subOut;
            int size = bfs.size();

            for(int i = 0; i<size; i++){
                TreeNode* curr = bfs.front();
                bfs.pop();
                
                subOut.push_back(curr->val);

                if(curr->left){
                    bfs.push(curr->left);
                }
                if(curr->right){
                    bfs.push(curr->right);
                }
            }


            if(!subOut.empty()){
                output.push_back(subOut);
            }
        }

        return output;
    }
};
