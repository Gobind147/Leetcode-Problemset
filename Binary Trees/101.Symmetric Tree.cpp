//Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
//Input: root = [1,2,2,3,4,4,3]
//Output: true
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL|| issymmetrichelp(root->left,root->right);
    }
    bool issymmetrichelp(TreeNode* left, TreeNode* right){
        if(left==NULL || right==NULL)
            return left==right;
        if(left->val!=right->val) 
            return false;
        return issymmetrichelp(left->left,right->right) && issymmetrichelp(left->right,right->left);
    }
};
