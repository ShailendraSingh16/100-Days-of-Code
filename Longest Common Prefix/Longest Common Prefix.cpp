class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n =strs.size();
        sort(strs.begin(),strs.end());

        string s=strs[0];
        string s1=strs[n-1];

        int a=0;

        while(a<s.length()){
            if(s.at(a)==s1.at(a)){
                a++;
            }
            else{
                break;
            }
        }
        return (a==0)?"":s.substr(0,a);
    }
};
