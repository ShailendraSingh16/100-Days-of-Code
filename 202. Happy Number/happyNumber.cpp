class Solution {
private:
    int pow(int a, int b){
    if(b==0){
        return 1;
    }
    
    if(a==0){
        return 0;
    }
    
    return a*pow(a,b-1);
}
public:
    bool isHappy(int n) {
    int currNum=n;
    
    while(currNum>=10){
        int b=currNum;
        int d=0;
        while(b!=0){
            d+=pow(b%10,2);
            b/=10;
        }
        currNum=d;
        d=0;
    }
    
    if(currNum==1 || currNum==7){
        return true;
    }
    return false;
    }
};
