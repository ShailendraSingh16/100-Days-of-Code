class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans=1;
        vector<int>count;

        sort(tasks.begin(),tasks.end());

        if(tasks.size()==1)
        return -1;

        for(int i=1;i<tasks.size();i++){
            if(tasks[i]==tasks[i-1])
            ans++;
            else{
                count.push_back(ans);
                ans=1;
            }
        }
        count.push_back(ans);

        ans=0;

        for(int i=0;i<count.size();i++){
            if(count[i]==1)
            return -1;
            if(count[i]==2 or count[i]==3)
            ans++;
            if(count[i]>3)
            ans+=(count[i]+2)/3;
        }
        return ans;
    }
};
