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

 class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root){
             return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
        //recursive
    }
};

 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root ==NULL){
            return NULL;
        }
        if(root -> val == val){
            return root;
        }
        if(val < root -> val){
            root = searchBST(root -> left, val);
        }
        else{
            root = searchBST(root -> right, val);
        }
        return root;
        
   
        // }
        // else{
        //     searchBST(root->left);
        //     searchBST(root->right);
        // }
        // return null;
    }
};
