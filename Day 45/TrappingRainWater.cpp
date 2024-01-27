class Solution {
public:
    int trap(vector<int>& h) {
        int m=0;
        int n=h.size()-1;
        int lmax=INT_MIN,rmax=INT_MIN,ans=0;
        while(m<n){
            lmax=max(lmax,h[m]);
            rmax=max(rmax,h[n]);
            if(lmax<rmax){
                ans += lmax-h[m++];
            }
            else{
                ans += rmax-h[n--];
            }
        }
        return ans;
    }
};