class Solution {
public:
    int divisor(vector<int>& nums){
          unordered_set<int>ans;
        
        for(int i=0;i<nums.size();i++){
            int s=sqrt(nums[i]);
            for(int j=2;j<=s;j++){
                if(nums[i]%j==0){
                    ans.insert(j);
                    
                    while(nums[i]%j==0){
                        nums[i]/=j;
                    }
                }
            }
            if(nums[i]>1){
                ans.insert(nums[i]);
            }
        }
        return ans.size();
    }
    
    int distinctPrimeFactors(vector<int>& nums) {
         int a=divisor(nums);
        
        return a;
    }
};
