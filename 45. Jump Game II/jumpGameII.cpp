class Solution {
public:
    int jump(vector<int>& nums) {

        if(nums.size()==1){
            return 0;
        }

        int maxElement=INT_MIN;
        int curr=0,count=0;

        for(int i=0;i<nums.size()-1;i++){

            maxElement=max(maxElement,(nums[i]+i));

            if(curr==i){
                curr=maxElement;
                count++;
            }

            if(curr>nums.size()-1){
                return count;
            }
        }
        return count;
    }
};
