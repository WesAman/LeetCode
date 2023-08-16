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
//The inorderTraversal function takes a pointer to the root of a binary tree as input 
//and returns a vector containing the values of the tree nodes in in-order traversal order.
// It initializes an empty vector nodes and calls the inOrder function to perform the traversal.
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        inOrder(root, nodes);
        return nodes;
        
    }
//The inOrder function is a recursive helper function that performs the actual in-order traversal.
// It takes a pointer to the current root node and a reference to the nodes vector.
    private:
    void inOrder(TreeNode *root, vector<int> &nodes){
        if(!root){
            return;
        }
        inOrder(root -> left, nodes); //go visit left nodes
        nodes.push_back(root -> val); //add root to vector nodes
        inOrder(root -> right, nodes); //visit all right nodes
    }
};

/*
Inside the inOrder function:

The base case checks if the root pointer is nullptr, indicating an empty tree or the end of a subtree. If so, it returns, as there is nothing to process.
The function then recursively calls inOrder on the left subtree (root->left), which traverses the left subtree in in-order.
Next, it adds the value of the current root node (root->val) to the nodes vector using nodes.push_back().
Finally, it recursively calls inOrder on the right subtree (root->right), which traverses the right subtree in in-order.
This process continues until all nodes in the binary tree have been visited and their values have been added to the nodes vector.

At the end, the nodes vector contains the values of the binary tree nodes in in-order traversal order, and it is returned by the inorderTraversal function.
*/
