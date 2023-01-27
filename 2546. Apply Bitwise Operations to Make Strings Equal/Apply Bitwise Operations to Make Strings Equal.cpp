class Solution {
public:
    bool makeStringsEqual(string s, string target) {

        int a=0,b=0;  // both variable store count of 1 of both string

        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                a++;
            }

            if(target[i]=='1'){
                b++;
            }
        }

        if(b==0){
            return s==target;
        }
        return a>0;
    }
};
