class Solution {
public:
    
    int elimination(int n){
        // base case
        if(n<=2){
            return n-1;
        }
        if(n%2==1){
            return n-2-(2*elimination((n-1)/2));
        }
        return n-1-(2*elimination(n/2));
    }

    int lastRemaining(int n) {

        int ans=elimination(n)+1;

        return ans;
    }
};
