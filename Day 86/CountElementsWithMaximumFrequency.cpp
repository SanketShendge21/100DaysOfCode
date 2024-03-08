class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int,int> cnt;
        for(int i:nums){
            cnt[i]++;
        }
        int freq=0,res=0;
        for(auto i:cnt){
            freq = max(freq,i.second);
        }
        for(auto num:cnt){
            if(num.second==freq){
                res+=num.second;
            }
        }
        return res;
    }
};