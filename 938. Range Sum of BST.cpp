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
    int rangeSumBST(TreeNode* root, int low, int high) {
    if (root == nullptr) { //if nullptr
        return 0; //return zero
    }
    
    int sum = 0; 
    if (root->val >= low && root->val <= high) { 
        //if current node value(left side) is greater or equal than low,
        //and if the right side is less than or equal to high
        //that means we're in range, which means we're adding it to 'sum'
        sum += root->val;
    }
    
    if (root->val > low) {
        //if current node is greater than low, this means there are more nodes down the (left) line that fall in range
        //to be added to sum
        sum += rangeSumBST(root->left, low, high);
    }
    if (root->val < high) {
        //if current node is less than high, this means there are more nodes down the (right) line that fall in range
        //to be added to sum
        sum += rangeSumBST(root->right, low, high);
    }
    
    return sum;
    }
};
