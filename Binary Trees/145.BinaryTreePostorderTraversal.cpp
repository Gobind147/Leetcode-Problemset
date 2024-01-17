//Given the root of a binary tree, return the postorder traversal of its nodes' values.
//Input: root = [1,null,2,3]
//Output: [3,2,1]
class Solution {
public:
    vector<int> res;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=NULL)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            res.push_back(root->val);
        }
        return res;
        
    }
};
