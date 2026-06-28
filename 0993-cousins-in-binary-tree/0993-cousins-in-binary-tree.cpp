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
    int dx=-1, dy=-1;
    TreeNode *px=nullptr, *py=nullptr; 
    void dfs(TreeNode* root, TreeNode* parent, int depth, int x, int y){
        if(root==NULL)return;

        if(root->val==x){
            dx=depth;
            px=parent;
        }
        if(root->val==y){
            dy=depth;
            py=parent;
        }

        dfs(root->left, root, depth+1, x, y);
        dfs(root->right, root, depth+1, x, y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, nullptr, 0, x, y);
        return dx==dy && px!=py;
    }
};