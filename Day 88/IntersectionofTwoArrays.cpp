class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersect;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(intersect));

        vector<int>::iterator it;
        it = unique(intersect.begin(), intersect.end());
        intersect.resize(distance(intersect.begin(),it)); 
        return intersect;
    }
};