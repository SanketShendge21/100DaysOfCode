class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x;
        for (auto& coord: points)
            x.push_back(coord[0]);
        sort(x.begin(), x.end());
        adjacent_difference(x.begin(), x.end(), x.begin());

        return *max_element(x.begin()+1, x.end());       
    }
};