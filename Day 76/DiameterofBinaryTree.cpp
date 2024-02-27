class Solution {
public:
    int ans=0;
    int dfs(TreeNode* root){
        if (root==NULL) return 0;
        int r=dfs(root->right);
        int l=dfs(root->left);  
        ans=max(ans, l+r);
        return 1+max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) {       
        dfs(root);
        return ans;
    }
};