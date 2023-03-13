class Solution {
public:
    
    bool isPossible(char ch){

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u'){
            return true;
        }
        return false;
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;

        for(int i=left;i<=right;i++){
            if((isPossible(words[i].front())) && (isPossible(words[i].back()))){
                count++;
            }
        }
        return count;
    }
};
