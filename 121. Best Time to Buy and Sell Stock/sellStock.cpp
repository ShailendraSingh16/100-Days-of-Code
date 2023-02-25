class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ans=0;
        int curr=INT_MAX;

        for(int i=0;i<prices.size();i++){
            curr=min(curr,prices[i]);
            ans=max(ans,prices[i]-curr);
        }
        return ans;
    }
};
