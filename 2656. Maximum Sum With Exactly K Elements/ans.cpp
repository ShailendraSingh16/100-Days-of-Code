class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        int n=nums.size()-1;
        int ans=0;
        sort(nums.begin(),nums.end());
        
        while(k!=0){
            ans+=nums[n];
            nums[n]+=1;
            k--;
        }
        return ans;
    }
};
