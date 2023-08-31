/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if (root ==nullptr){
            return 0;
        }

        int depth = 0;
        for(Node* child : root -> children){
            //iterate through each child of the current node root.
            // For each child, calculate the maximum depth of that subtree using a recursive call to maxDepth

             depth  = max(depth, maxDepth(child));
            //compare the current value of depth with the depth of the current child's subtree
            //upon finding max, 'depth' will hold the maximum depth across all subtrees.
         }
        return 1 + depth;
    }
    
};
