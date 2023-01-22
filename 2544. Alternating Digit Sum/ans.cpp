class Solution {
public:
    int alternateDigitSum(int n) {
        
        int sum=0;
        vector<int>ans;
        
        while(n!=0){
            ans.push_back(n%10);
            n/=10;
        }
        
        int a=1;
        for(int i=ans.size()-1;i>=0;i--){
            sum+=(a*ans[i]);
            a*=-1;
        }
        return sum;
    }
};
