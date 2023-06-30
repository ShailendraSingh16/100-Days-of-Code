class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //sort(height.begin(),height.end());

    
        int maxArea=INT_MIN;

        int i=0;
        int j=height.size()-1;

        while(i<j){
           maxArea=max(maxArea,min(height[i],height[j])*abs(i-j));

           if(height[i]<height[j]){
               i++;
           }
           else{j--;}
        }
        return maxArea;
    }
};
