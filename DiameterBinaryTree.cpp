/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int get_height(TreeNode* root, int& ans) 
    { 
        if (root == NULL) 
            return 0; 

        int left_height = get_height(root->left, ans); 

        int right_height = get_height(root->right, ans); 

        // update the answer, because diameter of a 
        // tree is nothing but maximum value of 
        // (left_height + right_height + 1) for each node 
        ans = max(ans, left_height + right_height); 

        return 1+max(left_height, right_height); 
    } 
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == 0)
            return 0;
        int res = INT_MIN;
        get_height(root, res);
        return res;
    }
};