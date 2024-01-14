class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!=w2.size()) return false;
        vector<int> freq1(26),freq2(26);
        set<char> s1,s2;
        for(auto c : w1) {
            s1.insert(c);
            freq1[c-'a']++;
        }
        for(auto c : w2) {
            s2.insert(c);
            freq2[c-'a']++;
        }
        if(s1!=s2) return false;
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        if(freq1==freq2) return true;
        return false;
    }
};