class Solution {
public:
    vector<int> evenOddBit(int n) {

        vector<int> ans(2);

        int evenBit=0,oddBit=0;
        int setBit=0;


        while(n>0){
            if(setBit%2==0){
                if(n%2==1){
                    evenBit++;
                }
            }
            else{
                if(n%2==1){
                    oddBit++;
                }
            }
            n/=2;
            setBit++;
        }
        
        return {evenBit,oddBit};
        
    }
};
