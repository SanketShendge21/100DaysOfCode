class Solution 
{
private:
    string str;
    int check(int l, int r, int ans = 0)
    {
        while(l >= 0 and r <= str.size())
        {
            if(str[l--] == str[r++]) ans++;
            else break;
        }
        return ans;
    }
public:
    int countSubstrings(string s) 
    {
        int n = size(s), ans = 0;str = s;
        for(int i = 0; i < n; i++)
        {
            ans += check(i,i); 
            ans += check(i,i+1); 
        }
        return ans;
    }
};