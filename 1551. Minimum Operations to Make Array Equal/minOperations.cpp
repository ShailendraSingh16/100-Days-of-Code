class Solution {
public:
    int minOperations(int n) {

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=(2*i)+1;
        }

        int count=0,sum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
        }

        int key=sum/n;

        for(int i=0;i<n;i++){
            count+=abs(key-arr[i]);
        }
        return (count/2);
    }
};
