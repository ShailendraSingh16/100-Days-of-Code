class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int ans=0;

        unordered_map<int,int>mpp;

        for(int l=0,r=0;r<n;r++){
            ++mpp[fruits[r]];

            while(mpp.size()>2){
                if(--mpp[fruits[l]] == 0)
                mpp.erase(fruits[l]);
                ++l;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
