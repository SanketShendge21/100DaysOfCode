class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return 0;
        }
        int right = rangeSumBST(root->right, low,high); 
        int left = rangeSumBST(root->left, low,high); 
        if (root->val >= low && root->val <= high )
        {
            return right + left + root->val;
        }
        return right + left ;
    }
};