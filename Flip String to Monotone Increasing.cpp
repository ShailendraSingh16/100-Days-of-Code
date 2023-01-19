class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int count=0;
        int oneCount=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                oneCount++;
            }
            else{
                count++;
                count=min(oneCount,count);
            }
        }
        return count;
    }
};
