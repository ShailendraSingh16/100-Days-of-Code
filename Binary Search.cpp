class Solution {
public:
    
    int binarySearch(vector<int>& nums, int s, int e, int k){

        if(s>e){
            return -1;
        }
        int mid=s+(e-s)/2;

        if(nums[mid]==k){
            return mid;
        }

        if(nums[mid]>k){
            return binarySearch(nums,s,mid-1,k);
        }
        else{
            return binarySearch(nums,mid+1,e,k);
        }

    }

    int search(vector<int>& nums, int target) {

        int ans= binarySearch(nums,0,nums.size()-1,target);

        return ans;       
    }
};
