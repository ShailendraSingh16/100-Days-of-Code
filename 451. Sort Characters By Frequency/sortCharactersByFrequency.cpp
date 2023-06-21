class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();

        map<char,int>mpp;
        vector<pair<int,char>>v;

        string ans="";

        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }

        for(auto it:mpp){
            v.push_back({it.second,it.first});
        }

        sort(v.begin(),v.end(),greater<pair<int,char>>());

        for(auto it:v){
            ans+=string(it.first,it.second);
        }

        return ans;
    }
};
