class Solution {
public:
    int minMoves(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        int minElement=nums[0];

        int count=sum-((nums.size())*minElement);

        return count;
    }
};

/* 
TC: O(N)
SC: O(1)
*/
