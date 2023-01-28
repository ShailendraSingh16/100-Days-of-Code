class Solution {
public:
    
    void reverseString(vector<char>& s, int i, int j){
 
    if(i>j){                              // Base Case
        return;
    }

    swap(s[i],s[j]);
    i++;
    j--;
   
    reverseString(s,i,j);                  // recursive relation
   }
    void reverseString(vector<char>& s) {

        reverseString(s,0,s.size()-1);
        
    }
};
