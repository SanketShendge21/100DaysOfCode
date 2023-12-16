class Solution {
public:
    string sortString(string &str) 
    { 
    sort(str.begin(), str.end()); 
    return str; 
    } 
    bool isAnagram(string s, string t) {
       if(sortString(s) == sortString(t) ){
           return true;
       } 
       else{
           return false;
       }
    }
};