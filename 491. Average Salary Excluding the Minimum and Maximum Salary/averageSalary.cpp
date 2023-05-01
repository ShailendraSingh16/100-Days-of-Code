class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        sort(salary.begin(),salary.end());
        
        double sum=0;
        for(int i=1;i<=salary.size()-2;i++){
            sum+=salary[i];
        }

        ans=sum/(salary.size()-2);

        return ans;
    }
};
