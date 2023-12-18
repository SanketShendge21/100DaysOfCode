class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>merged;
    sort(begin(intervals),end(intervals));
    int row=intervals[0][0], col=intervals[0][1];
    for(auto num:intervals)
    {
        if(num[0]>col)
        {
            merged.push_back({row,col});
            row=num[0]; col=num[1];
        }
        else if(num[1]>col)
        {
            col=num[1];
        }    
    }
    merged.push_back({row,col});
    return merged;
}
};