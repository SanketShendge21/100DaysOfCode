class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        TreeNode *dummy = NULL;
        while(!q.empty()){
            dummy = q.front();
            q.pop();
            if(dummy->right){
                q.push(dummy->right);
            }
            if(dummy->left){
                q.push(dummy->left);
            }
        }
        return dummy->val;
    }
};