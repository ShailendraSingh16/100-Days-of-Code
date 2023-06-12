class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        if(nums.size()<3){
            return -1;
        }

        sort(nums.begin(),nums.end());

        int s=0;
        int e=nums.size()-1;

        int mid=s+(e-s)/2;
        
        return nums[mid];
    }
};
