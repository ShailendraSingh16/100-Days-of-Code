class Solution {
public:
    string categorizeBox(long long length, long long width, long long height, long long mass) {
        int a=0,b=0;
        
        
        if((length>=10000) || (width>=10000) || (height>=10000) || (length*width*height>=1000000000)){
            a=1;
        }
        if(mass>=100){
            b=1;
        }
        
        if(a==1 && b==1){
            return "Both";
          //  break;
        }
        if(a==0 && b==0){
            return "Neither";
           // break;
        }
        if(a==1 && b==0){
            return "Bulky";
           // break;
        }
        return "Heavy";
    }
};
