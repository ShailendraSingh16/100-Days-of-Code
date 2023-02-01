class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
      
        if(str1.length()<str2.length()){
            swap(str1,str2);
        }
        
        int i=0;
        for(;i<str2.length();i++){
            if(str1[i]!=str2[i]){
                return "";
            }
        }
      
      if((str1.length()==str2.length()) && (i==str2.length())){
          return str2;
      }
      return gcdOfStrings(str1.substr(i),str2);
    }
};
