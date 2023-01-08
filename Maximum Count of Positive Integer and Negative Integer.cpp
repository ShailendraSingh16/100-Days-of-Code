class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int pos=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg++;
            }
            else if(nums[i]>0){
                pos++;
            }
        }
        
        if(pos>=neg){
            return pos;
        }
        return neg;
    }
};
