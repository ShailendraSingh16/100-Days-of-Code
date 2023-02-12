class Solution {
public:
    long long int concat(int a, int b){ 
    string s1 = to_string(a);
    string s2 = to_string(b);
 
    string s = s1 + s2;
 
    long long int c = stoi(s);
 
    return c;
}
    long long findTheArrayConcVal(vector<int>& nums) {
        
        long long int ans=0;
        
        int i=0;
        int j=nums.size()-1;
        
        while(i<j){
            ans+=concat(nums[i],nums[j]);
            i++;
            j--;
        }
        
        if(i==j){
            ans+=nums[i];
        }
        return ans;
    }
};
