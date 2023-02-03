class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows==1){
            return s;
        }

        string ans="";

        for(int i=0;i<s.length();i+=((numRows-1)*2))
            ans+=s[i];

        for(int j=1;j<numRows-1;j++){
            int a=0;
            int i=j;

            while(i<s.length()){
                if(a==0){
                    ans+=s[i];
                    i+=(((numRows-1)*2)-(j*2));
                    a=1;
                }
                else{
                    ans+=s[i];
                    i+=(j*2);
                    a=0;
                }
            }
        }
        
        for(int i=numRows-1;i<s.length();i+=((numRows-1)*2)){
            ans+=s[i];
        }

        return ans;
    }
};
