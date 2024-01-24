class Solution {
public:
    int count[10] = {0};
    bool check(){
        int oddCount = 0;
        for (int i = 1; i <= 9; i++) {
            if ((count[i] & 1) == 1) oddCount++;
        }
        return (oddCount <= 1);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int paths=0;
        if (root == NULL) return 0;
        count[root->val]++;
        if ((root->left == NULL) && (root->right == NULL)) {
            if (check()) paths = 1;
            else paths = 0;
        }
        else {
            paths = pseudoPalindromicPaths(root->left) + pseudoPalindromicPaths(root->right);
        }
        count[root->val]--;
        return paths;
    }
};