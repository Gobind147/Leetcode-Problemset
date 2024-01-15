//Given the root of a binary tree, return the preorder traversal of its nodes' values.
//Input: root = [1,null,2,3]
//Output: [1,2,3]
class Solution {
public:
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root!=NULL)
        {
            res.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return res;
    }
};
