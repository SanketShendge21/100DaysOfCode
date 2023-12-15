class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (next_permutation(nums.begin(), nums.end())) {
            for (int num : nums) {
                cout<<num<<" ";
            }
            cout<<endl;
        }
        else {
            sort(nums.begin(), nums.end());

            for (int num : nums) {
                cout<<num<<" ";
            }
            cout<<endl;
        }
    }
};