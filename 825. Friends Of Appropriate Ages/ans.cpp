class Solution {
public:
    
    int binarySearch(vector<int>& ages, int key){
        int start=0;
        int end=ages.size()-1;

        while(start<=end){
             int mid=start+(end-start)/2;

             if(ages[mid]<=key){
                 start=mid+1;
             }
             else{
                 end=mid-1;
             }
        }
        return start;
    }

    int numFriendRequests(vector<int>& ages){

        sort(ages.begin(),ages.end());

        int count=0;

        for(int i=0;i<ages.size();i++){
            int a=binarySearch(ages,ages[i]*0.5+7);
            int b=binarySearch(ages,ages[i]);

            count+=max(b-a-1,0);
        }
        return count;
    }
};
