class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();

       sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return true;
            }
          //  break;
        }
        return false;
    }
};
