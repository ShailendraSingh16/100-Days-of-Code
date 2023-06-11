class Solution {
public:
    bool isFascinating(int n) {
        unordered_map<string,int>m;
        int a=2*n;
        int b=3*n;

        string s1,s2,s3,s;
        s1=to_string(n);
        s2=to_string(a);
        s3=to_string(b);

        s=s1+s2+s3;

        for(int i=0;i<s.size();i++)
        {
            string j="";
            j+=s[i];
            if(s[i]=='0')
                return false;
            m[j]++;
            j.clear();
        }
        for(int i=1;i<=9;i++)
        {
            string j=to_string(i);
            if(m[j]!=1)
                return false;
        }
        return true;
    }
};
