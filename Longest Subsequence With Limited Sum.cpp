//  Longest Subsequence With Limited Sum Solution
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans;

        sort(nums.begin(),nums.end());
        
        for(int i=0;i<queries.size();i++){
            int count=0;
            int sum=0;
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];
                if(sum<=queries[i]){
                    count++;
                }
            }
            ans.push_back(count);
            sum=0;
            count=0;
        }
        return ans;
    }
};
